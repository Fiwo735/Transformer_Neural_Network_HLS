import torch
import numpy as np

def extract_weights_biases(model_path: str, result_path:str, var_type:str, flatten_order:str):
  model = torch.load(model_path)
  overview = []

  for layer_name, values in model['state_dict'].items():

    h_file_name = layer_name.replace('.', '_')
    out_file = open(result_path + h_file_name + '.h', 'w')
    txt_file = open(result_path + h_file_name + '.txt', 'w')

    # comments with information
    values = values.numpy()
    out_file.write("// Numpy array shape " + str(list(values.shape)) + "\n")
    out_file.write("// Min " + str(np.amin(values)) + "\n")
    out_file.write("// Max " + str(np.amax(values)) + "\n")
    out_file.write("// Number of zeros " + str(np.count_nonzero(values == 0)) + "\n\n")
    overview.append([str(list(values.shape)), layer_name])

    # header guards
    header_guard_name = h_file_name.upper() + "_H_"
    out_file.write("#ifndef " + header_guard_name + "\n")
    out_file.write("#define " + header_guard_name + "\n\n")

    values = values.flatten(order=flatten_order)
    declaration = var_type + " " + h_file_name + "[" + str(len(values)) + "]"

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
  

  # print summary
  print("Model taken from {}".format(model_path))
  print("Weights/biases saved to {}".format(result_path))

  print('\n' + '-'*20 + "Layers summary" + '-'*20 + '\n')
  for shape, name in overview:
    if name.split('.')[-1] == 'weight':
      print()
    print("{: <12} {: <20}".format(shape, name))


if __name__ == "__main__":
  model_path = "fyp21yuan-code/experiments/constituent_base/best.pth.tar"
  result_path = "extracted_weights_biases/"
  #TODO which flatten_order is needed?
  extract_weights_biases(model_path=model_path, result_path=result_path, var_type="float", flatten_order='C')

