extracted_weights_biases_dir="extracted_weights_biases/"
model_weights_biases_dir="hls4ml_tutorial/model_1/hls4ml_prj/firmware/weights/"

echo "Cleaning ${model_weights_biases_dir}*"
rm ${model_weights_biases_dir}*

echo "Copying from ${extracted_weights_biases_dir}* to ${model_weights_biases_dir}"
cp ${extracted_weights_biases_dir}* ${model_weights_biases_dir}