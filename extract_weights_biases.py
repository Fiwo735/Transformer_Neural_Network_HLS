import torch
import numpy as np
from typing import Optional, List, Dict, Tuple

def transform_norm_weights_biases(
  arr: np.array,
  is_weight: bool,
  mean: float,
  var: float,
  corr_old_weights: Optional[List[float]] = None,
  eps: int = 1e-5
) -> np.array:

  # mean = arr.mean()
  # var = arr.var()
  denom = np.sqrt(var + eps)

  # f_norm = None
  normalized_arr = None
  if is_weight:
    # f_norm = lambda x: (x / denom)
    normalized_arr = np.array([w / denom for w in arr])
  else:
    # f_norm = lambda x: (x - (corr_old_weights * mean / denom))
    normalized_arr = np.array([b - corr_old_weights[i] * mean / denom for i, b in enumerate(arr)])

  # normalized_arr = np.array(list(map(f_norm, arr)))
  assert normalized_arr.shape == arr.shape,\
    f'Array shape cannot change (old {arr.shape}, new {normalized_arr.shape}'

  return normalized_arr


def extract_weights_biases(
  model_path: str,
  result_path: str,
  norm_layer_base_names: Dict[str, Tuple[float, float]],
  var_type: str = "model_default_t",
  flatten_order: str = "C",
) -> None:

  model = torch.load(model_path)
  overview = []
  parameters_include = []
  load_weights_from_txt = []

  previous_base = None
  previous_was_weight = False
  previous_weights = None

  i = 0

  for layer_name, values in model['state_dict'].items():
    i += 1
    # print(model['state_dict'].keys())

    h_file_name = layer_name.replace('.', '_')
    parameters_include.append('#include "weights/' + h_file_name + '.h"')
    out_file = open(result_path + h_file_name + '.h', 'w')
    txt_file = open(result_path + h_file_name + '.txt', 'w')

    # comments with information
    values = values.cpu().numpy()
    out_file.write("// Numpy array shape " + str(list(values.shape)) + "\n")
    out_file.write("// Min " + str(np.amin(values)) + "\n")
    out_file.write("// Max " + str(np.amax(values)) + "\n")
    out_file.write("// Number of zeros " + str(np.count_nonzero(values == 0)) + "\n\n")
    overview.append([str(list(values.shape)), layer_name])

    # header guards
    header_guard_name = h_file_name.upper() + "_H_"
    out_file.write("#ifndef " + header_guard_name + "\n")
    out_file.write("#define " + header_guard_name + "\n\n")

    # transform row-major to column-major to match HLS data layout
    # print(layer_name)
    # print(values.shape)
    if len(values.shape) > 1:
      # print(values.shape[-2:])
      # print(values)
      dim0, dim1 = values.shape[-2:]
      values = values.flatten(order='C')
      # print('flatten C')
      # print(values)
      values = values.reshape(dim1, dim0, order='F')
      # print('reshape F')
      # print(values)
      values = values.flatten(order='C')
      # print('flaten C final')
      # print(values)

    # apply the mean/variance embedding for normalization layers
    current_base = '.'.join(layer_name.split('.')[:-1])
    # print(f'Checking if {layer_name} (with base {current_base}) is in norm_layer_base_names')
    if current_base in norm_layer_base_names.keys():
      print(f'Applying mean/var calculation embedding to {layer_name}')
      current_is_weight = layer_name.split('.')[-1] == 'weight'
      mean, var = norm_layer_base_names[current_base]

      if not current_is_weight:
        assert previous_base == current_base and previous_was_weight,\
          f'Layer base name {current_base} suggests it is a bias, but no corresponding weight was found'
        assert len(values) == len(previous_weights),\
          f'Layer base name {current_base} suggests it is a bias, but previous weights have different length'
        
        values = transform_norm_weights_biases(
          values,
          is_weight=current_is_weight,
          mean=mean,
          var=var,
          corr_old_weights=previous_weights
        )
      
      else:
        previous_weights = values.copy()
        values = transform_norm_weights_biases(
          values,
          is_weight=current_is_weight,
          mean=mean,
          var=var
        )

      previous_base = current_base
      previous_was_weight = current_is_weight

    # print(values)
    elements_count = len(values)
    declaration = var_type + " " + h_file_name + "[" + str(elements_count) + "]"
    load_weights_from_txt.append(f'nnet::load_weights_from_txt<{var_type}, {elements_count}>({h_file_name}, "{h_file_name}.txt");')

    # declaration
    out_file.write("#ifndef __SYNTHESIS__\n")
    out_file.write(declaration + ";\n")
    out_file.write("#else\n")

    # declaration + initialization
    out_file.write(declaration + " = {")
    values_list = ['\n' * (n % 7 == 6) + str(val) for n, val in enumerate(values.tolist())]
    values_to_write = ', '.join(values_list)
    out_file.write(values_to_write)
    txt_file.write(values_to_write.replace('\n', ''))

    # closing endifs
    out_file.write("};\n\n")
    out_file.write("#endif\n\n")
    out_file.write("#endif\n")
    out_file.close()
    txt_file.close()

    # if i == 2:
    #   exit()  

  # print summary
  print("Model taken from {}".format(model_path))
  print("Weights/biases saved to {}".format(result_path))

  print('\n' + '-'*20 + "Layers summary" + '-'*20 + '\n')
  for shape, name in overview:
    if name.split('.')[-1] == 'weight':
      print()
    print("{: <12} {: <20}".format(shape, name))

  # print section of #includes for parameters.h
  print("\n".join(parameters_include))

  #print section of nnet::load_weights_from_txt for myproject.cpp
  print("\n".join(load_weights_from_txt))


if __name__ == "__main__":
  model_path = "fyp21yuan_code/experiments/constituent_base/best.pth.tar"
  result_path = "extracted_weights_biases/"
  norm_layer_base_names = {
    # 'out_layer_0': (-0.0422399528324604, 1.6616789102554321),
    # 'transformers.0.linear.0': (-0.014030318707227707, 127.25072479248047),
    # 'transformers.0.linear.3': (0.0001844080543378368, 0.11668402701616287),
    # 'transformers.0.self_attention.norm': (0.013345913961529732, 127.07893371582031),
    # 'transformers.1.linear.0': (-0.029353268444538116, 127.50463104248047),
    # 'transformers.1.linear.3': (0.017480721697211266, 0.11090429127216339),
    # 'transformers.1.self_attention.norm': (-0.01761310175061226, 127.43500518798828),
    # 'transformers.2.linear.0': (-0.043246205896139145, 127.74173736572266),
    # 'transformers.2.linear.3': (-0.00957483146339655, 0.11539013683795929),
    # 'transformers.2.self_attention.norm': (-0.04083692282438278, 127.71623992919922),
  }
  extract_weights_biases(model_path=model_path, result_path=result_path, norm_layer_base_names=norm_layer_base_names)

