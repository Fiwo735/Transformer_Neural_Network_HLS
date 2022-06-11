import torch
<<<<<<< HEAD
=======
import argparse
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
import numpy as np
from typing import Optional, List, Dict, Tuple

DEVICE = torch.device('cuda' if torch.cuda.is_available() else 'cpu')

def transform_norm_weights_biases(
  arr: np.array,
  is_weight: bool,
<<<<<<< HEAD
  mean: float,
  var: float,
=======
  # mean: float,
  # var: float,
  mean: torch.Tensor,
  var: torch.Tensor,
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
  corr_old_weights: Optional[List[float]] = None,
  eps: int = 1e-5,
) -> np.array:

<<<<<<< HEAD
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
=======
  mean = mean.cpu().numpy()
  var = var.cpu().numpy()

  # print(f'{arr.shape=}, {mean.shape=}, {var.shape=}')

  denom = np.sqrt(var + eps)

  if is_weight:
    # normalized_arr = np.array([w / denom for w in arr])
    normalized_arr = np.divide(arr, denom)
  else:
    # normalized_arr = np.array([b - corr_old_weights[i] * mean / denom for i, b in enumerate(arr)])
    normalized_arr = np.subtract(arr, np.multiply(np.divide(corr_old_weights, denom), mean))

  # normalized_arr = np.array(list(map(f_norm, arr)))
  assert normalized_arr.shape == arr.shape,\
    f'Array shape cannot change - old: {arr.shape}, new: {normalized_arr.shape}'
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

  return normalized_arr

def prepare_files(
  result_path: str,
  layer_name: str,
  values,
  var_type: str,
  current_base: str,
  overview: List[str],
  parameters_include: List[str],
  load_weights_from_txt: List[str],
  previous_base,
  previous_was_weight,
  previous_weights,
  norm_layer_base_names_index: int=0,
<<<<<<< HEAD
=======
  running_mean_dict = None,
  running_var_dict = None,
  type_dict: Dict = None,
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
) -> tuple:

  h_file_name = layer_name.replace('.', '_')
  if norm_layer_base_names_index != 0:
    assert norm_layer_base_names_index == 1, 'norm_layer_base_names can only have 2 tuples (mean, var)'
    h_file_name += f"_{norm_layer_base_names_index}"
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

  # print debug raw values
<<<<<<< HEAD
  if len(values.shape) <= 2:
    np.savetxt(result_path + h_file_name + '_raw_' + '.txt', values, delimiter=', ', fmt='%.4f')
  else:
    assert len(values.shape) == 3, 'No more than 3 dimensions are expected'
    for layer in values:
      np.savetxt(result_path + h_file_name + '_raw_' + '.txt', layer, delimiter=', ', fmt='%.4f')
=======
  # if len(values.shape) <= 2:
  #   np.savetxt(result_path + h_file_name + '_raw_' + '.txt', values, delimiter=', ', fmt='%.4f')
  # else:
  #   assert len(values.shape) == 3, 'No more than 3 dimensions are expected'
  #   for layer in values:
  #     np.savetxt(result_path + h_file_name + '_raw_' + '.txt', layer, delimiter=', ', fmt='%.4f')
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

  # header guards
  header_guard_name = h_file_name.upper() + "_H_"
  out_file.write("#ifndef " + header_guard_name + "\n")
  out_file.write("#define " + header_guard_name + "\n\n")

  # transform row-major to column-major to match HLS data layout
  # print(layer_name)
  # print(values.shape)

  # if layer_name == 'transformers.0.self_attention.qkv.weight':
  #   print('-'*10 + 'transformers.0.self_attention.qkv.weight' + '-'*10)
  #   print(values.shape)
  #   print(values)
  #   print(values[0][0])
  #   print(values[0][1])
  #   print(values[1][0])
  if len(values.shape) > 1:
    # print(values.shape[-2:])
    # print(values)
    # TODO check if the below is always equivalent to flattening a transpose
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
  # print(f'Checking if {layer_name} (with base {current_base}) is in norm_layer_base_names')
  # print(f"{layer_name=} {previous_base=} {current_base=} {previous_was_weight=}")
<<<<<<< HEAD
  if current_base in norm_layer_base_names.keys():
    print(f'Applying mean/var calculation embedding to {layer_name}')
    current_is_weight = layer_name.split('.')[-1] == 'weight'
    mean, var = norm_layer_base_names[current_base][norm_layer_base_names_index]
=======
  # if current_base in norm_layer_base_names.keys():
  if current_base in running_mean_dict.keys():
    print(f'Applying mean/var calculation embedding to {layer_name}')
    current_is_weight = layer_name.split('.')[-1] == 'weight'
    # mean, var = norm_layer_base_names[current_base][norm_layer_base_names_index]
    mean, var = running_mean_dict[current_base], running_var_dict[current_base]
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

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
<<<<<<< HEAD
=======
  var_type = type_dict[h_file_name + '.h']
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
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

  return (previous_base, previous_was_weight, previous_weights)

def extract_weights_biases(
<<<<<<< HEAD
  model_path: str,
=======
  state_dict_path: str,
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
  result_path: str,
  norm_layer_base_names: Dict[str, Tuple[float, float]],
  var_type: str = "model_default_t",
  flatten_order: str = "C",
<<<<<<< HEAD
) -> None:

  model = torch.load(model_path, map_location=DEVICE)
=======
  type_dict: Dict = None,
) -> None:

  # Custom compare so that running stats are processed first, as weights and biases depend on them
  def custom_compare(item1):
    if 'running_mean' in item1 or 'running_var' in item1:
      return -1
    else:
      return 1
      
  state_dict_raw = torch.load(state_dict_path, map_location=DEVICE)['state_dict']
  state_dict = {}
  for k in sorted(state_dict_raw, key=custom_compare):
    state_dict[k] = state_dict_raw[k]

>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
  overview = []
  parameters_include = []
  load_weights_from_txt = []

  previous_base = None
  previous_was_weight = False
  previous_weights = None

<<<<<<< HEAD
  i = 0

  for layer_name, values in model['state_dict'].items():
    i += 1
    # print(model['state_dict'].keys())

    current_base = '.'.join(layer_name.split('.')[:-1])
=======
  running_mean_dict = {}
  running_var_dict = {}

  i = 0

  for layer_name, values in state_dict.items():
    i += 1
    # print(model['state_dict'].keys())

    # Skip num_batches_tracked attribute
    if 'num_batches_tracked' in layer_name:
      continue

    current_base = '.'.join(layer_name.split('.')[:-1])
    current_type = layer_name.split('.')[-1]

    if current_type == 'running_mean':
      running_mean_dict[current_base] = values
      continue
    elif current_type == 'running_var':
      running_var_dict[current_base] = values
      continue
      
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    if current_base in norm_layer_base_names.keys() and len(norm_layer_base_names[current_base]) == 2:
      # special case that needs separate weight and biases for [0] and [1:] layers
      _, _, _ = prepare_files(
        result_path=result_path,
        layer_name=layer_name,
        values=values,
        var_type=var_type,
        current_base=current_base,
        overview=overview,
        parameters_include=parameters_include,
        load_weights_from_txt=load_weights_from_txt,
        previous_base=previous_base,
        previous_was_weight=previous_was_weight,
        previous_weights=previous_weights,
        norm_layer_base_names_index=0,
<<<<<<< HEAD
=======
        type_dict=type_dict,
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
      )

      previous_base, previous_was_weight, previous_weights = prepare_files(
        result_path=result_path,
        layer_name=layer_name,
        values=values,
        var_type=var_type,
        current_base=current_base,
        overview=overview,
        parameters_include=parameters_include,
        load_weights_from_txt=load_weights_from_txt,
        previous_base=previous_base,
        previous_was_weight=previous_was_weight,
        previous_weights=previous_weights,
        norm_layer_base_names_index=1,
<<<<<<< HEAD
=======
        type_dict=type_dict,
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
      )

    else:
      previous_base, previous_was_weight, previous_weights = prepare_files(
        result_path=result_path,
        layer_name=layer_name,
        values=values,
        var_type=var_type,
        current_base=current_base,
        overview=overview,
        parameters_include=parameters_include,
        load_weights_from_txt=load_weights_from_txt,
        previous_base=previous_base,
        previous_was_weight=previous_was_weight,
        previous_weights=previous_weights,
<<<<<<< HEAD
=======
        running_mean_dict=running_mean_dict,
        running_var_dict=running_var_dict,
        type_dict=type_dict,
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
      )
    
    # if i == 2:
    #   exit()  

  # print summary
<<<<<<< HEAD
  print("Model taken from {}".format(model_path))
=======
  print("Model taken from {}".format(state_dict_path))
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
  print("Weights and biases saved to {}".format(result_path))

  print('\n' + '-'*20 + "Layers summary" + '-'*20 + '\n')
  for shape, name in overview:
    if name.split('.')[-1] == 'weight':
      print()
    print("{: <12} {: <20}".format(shape, name))

  # print section of #includes for parameters.h
<<<<<<< HEAD
  print("\n".join(parameters_include))

  #print section of nnet::load_weights_from_txt for myproject.cpp
  print("\n".join(load_weights_from_txt))


if __name__ == "__main__":
  model_path = "pytorch/best.pth.tar"
  # result_path = "extracted_weights_biases/"
  result_path = "hls/firmware/weights/"
=======
  print('\nContents of parameters.h')
  print("\n".join(parameters_include))

  #print section of nnet::load_weights_from_txt for myproject.cpp
  print('\nContents of myproject.cpp')
  print("\n".join(load_weights_from_txt))

def parse():
  parser = argparse.ArgumentParser(description='Extract weights and biases from a Pytorch model')
  parser.add_argument('--debug', action='store_true')

  return parser.parse_args()

if __name__ == "__main__":
  args = parse()

  if args.debug:
    state_dict_path = "pytorch/debug_best.pth.tar"
  else:
    state_dict_path = "pytorch/best.pth.tar"

  state_dict_path = "pytorch/epoch_8.pth.tar"
    
  # result_path = "extracted_weights_biases/"
<<<<<<< HEAD
  result_path = "hls_copy_8_embedded_dim/firmware/weights/"
=======
  result_path = "hls_copy_32_embedded_dim/firmware/weights/"
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
>>>>>>> a64934150a2208502fa9655412c7ccc27f2d7554
  norm_layer_base_names = {
    # 'out_layer_0':
    #   [(-0.04077378660440445, 1.673102617263794)],
    # 'transformers.0.linear.0':
    #   [(-0.012944059446454048, 1.103999137878418), (-0.014849442057311535, 125.7703628540039)],
    # 'transformers.0.linear.3':
    #   [(-0.032312922179698944, 0.11169926822185516), (6.87299034325406e-05, 0.11682288348674774)],
    # 'transformers.0.self_attention.norm':
    #   [(0.014009090140461922, 0.9665623903274536), (0.01286216452717781, 125.5963363647461)],
    # 'transformers.1.linear.0':
    #   [(-0.05173889547586441, 1.2466895580291748), (-0.030176758766174316, 126.03379821777344)],
    # 'transformers.1.linear.3':
    #   [(-0.020823126658797264, 0.11339834332466125), (0.018381545320153236, 0.11115330457687378)],
    # 'transformers.1.self_attention.norm':
    #   [(-0.03877968341112137, 1.1650422811508179), (-0.018674537539482117, 125.95524597167969)],
    # 'transformers.2.linear.0':
    #   [(-0.0410560704767704, 1.3692392110824585), (-0.043287187814712524, 126.27474975585938)],
    # 'transformers.2.linear.3':
    #   [(-0.012881459668278694, 0.11419916152954102), (-0.009449217468500137, 0.11544090509414673)],
    # 'transformers.2.self_attention.norm':
    #   [(-0.04117840528488159, 1.3190522193908691), (-0.04152524471282959, 126.24896240234375)],
  }
<<<<<<< HEAD
  extract_weights_biases(model_path=model_path, result_path=result_path, norm_layer_base_names=norm_layer_base_names)
=======

  # Code to generate type_dict template
  # from os import listdir
  # from os.path import isfile, join
  # mypath = 'hls/firmware/weights'
  # onlyfiles = [f for f in listdir(mypath) if isfile(join(mypath, f))]
  # c = '\n'.join([f"'{el}': 'xxx'," for el in sorted(onlyfiles) if el[-1] == 'h'])

  type_dict = {
    'log_table.h': 'top_log_softmax_log_t',

    'cls_token.h': 'top_cls_token_t',
    'inp_layer_bias.h': 'top_embedded_bias_t',
    'inp_layer_weight.h': 'top_embedded_weight_t',
    'out_layer_0_bias.h': 'top_norm_bias_t',
    'out_layer_0_weight.h': 'top_norm_weight_t',
    'out_layer_1_bias.h': 'top_mlp_bias_t',
    'out_layer_1_weight.h': 'top_mlp_weight_t',

    'transformers_0_linear_0_bias.h': 'T_norm0_bias_t',
    'transformers_0_linear_0_weight.h': 'T_norm0_weight_t',
    'transformers_0_linear_2_weight.h': 'T_dense0_weight_t',
    'transformers_0_linear_3_bias.h': 'T_norm1_bias_t',
    'transformers_0_linear_3_weight.h': 'T_norm1_weight_t',
    'transformers_0_linear_5_weight.h': 'T_dense1_weight_t',

    'transformers_0_self_attention_norm_bias.h': 'SA_norm_bias_t',
    'transformers_0_self_attention_norm_weight.h': 'SA_norm_weight_t',
    'transformers_0_self_attention_out_bias.h': 'SA_dense_bias_t',
    'transformers_0_self_attention_out_weight.h': 'SA_dense_weight_t',
    'transformers_0_self_attention_pre_exp_norm_bias.h': 'SA_exp_norm_bias_t',
    'transformers_0_self_attention_pre_exp_norm_weight.h': 'SA_exp_norm_weight_t',
    # 'transformers_0_self_attention_qkv_weight.h': 'SA_QKV_weight_t',
    'transformers_0_self_attention_q_weight.h': 'SA_Q_weight_t',
    'transformers_0_self_attention_k_weight.h': 'SA_K_weight_t',
    'transformers_0_self_attention_v_weight.h': 'SA_V_weight_t',

    'transformers_1_linear_0_bias.h': 'T_norm0_bias_t',
    'transformers_1_linear_0_weight.h': 'T_norm0_weight_t',
    'transformers_1_linear_2_weight.h': 'T_dense0_weight_t',
    'transformers_1_linear_3_bias.h': 'T_norm1_bias_t',
    'transformers_1_linear_3_weight.h': 'T_norm1_weight_t',
    'transformers_1_linear_5_weight.h': 'T_dense1_weight_t',

    'transformers_1_self_attention_norm_bias.h': 'SA_norm_bias_t',
    'transformers_1_self_attention_norm_weight.h': 'SA_norm_weight_t',
    'transformers_1_self_attention_out_bias.h': 'SA_dense_bias_t',
    'transformers_1_self_attention_out_weight.h': 'SA_dense_weight_t',
    'transformers_1_self_attention_pre_exp_norm_bias.h': 'SA_exp_norm_bias_t',
    'transformers_1_self_attention_pre_exp_norm_weight.h': 'SA_exp_norm_weight_t',
    # 'transformers_1_self_attention_qkv_weight.h': 'SA_QKV_weight_t',
    'transformers_1_self_attention_q_weight.h': 'SA_Q_weight_t',
    'transformers_1_self_attention_k_weight.h': 'SA_K_weight_t',
    'transformers_1_self_attention_v_weight.h': 'SA_V_weight_t',

    'transformers_2_linear_0_bias.h': 'T_norm0_bias_t',
    'transformers_2_linear_0_weight.h': 'T_norm0_weight_t',
    'transformers_2_linear_2_weight.h': 'T_dense0_weight_t',
    'transformers_2_linear_3_bias.h': 'T_norm1_bias_t',
    'transformers_2_linear_3_weight.h': 'T_norm1_weight_t',
    'transformers_2_linear_5_weight.h': 'T_dense1_weight_t',

    'transformers_2_self_attention_norm_bias.h': 'SA_norm_bias_t',
    'transformers_2_self_attention_norm_weight.h': 'SA_norm_weight_t',
    'transformers_2_self_attention_out_bias.h': 'SA_dense_bias_t',
    'transformers_2_self_attention_out_weight.h': 'SA_dense_weight_t',
    'transformers_2_self_attention_pre_exp_norm_bias.h': 'SA_exp_norm_bias_t',
    'transformers_2_self_attention_pre_exp_norm_weight.h': 'SA_exp_norm_weight_t',
    # 'transformers_2_self_attention_qkv_weight.h': 'SA_QKV_weight_t',
    'transformers_2_self_attention_q_weight.h': 'SA_Q_weight_t',
    'transformers_2_self_attention_k_weight.h': 'SA_K_weight_t',
    'transformers_2_self_attention_v_weight.h': 'SA_V_weight_t',
  }


  extract_weights_biases(state_dict_path=state_dict_path, result_path=result_path, norm_layer_base_names=norm_layer_base_names, type_dict=type_dict)
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

