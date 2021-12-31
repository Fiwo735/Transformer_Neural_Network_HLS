import torch
import numpy as np

def extract_weights_biases(model_path: str, result_path:str, var_type:str = "model_default_t", flatten_order:str = "C"):
  model = torch.load(model_path)
  overview = []
  parameters_include = []
  load_weights_from_txt = []

  # i = 0

  for layer_name, values in model['state_dict'].items():
    # i += 1

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
  #TODO which flatten_order is needed?
  extract_weights_biases(model_path=model_path, result_path=result_path, flatten_order='C')

