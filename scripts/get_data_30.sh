data_dir="pytorch/data/30"

wget https://zenodo.org/record/3601436/files/hls4ml_LHCjet_30p_train.tar.gz
mkdir -p ${data_dir}
cat *.tar.gz | tar -xzvf - --ignore-zeros --directory ${data_dir}
rm -rf hls4ml_LHCjet_30p_train.tar.gz

wget https://zenodo.org/record/3601436/files/hls4ml_LHCjet_30p_val.tar.gz
mkdir -p ${data_dir}
cat *.tar.gz | tar -xzvf - --ignore-zeros --directory ${data_dir}
rm -rf hls4ml_LHCjet_30p_val.tar.gz