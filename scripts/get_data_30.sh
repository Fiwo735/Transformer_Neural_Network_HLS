cd fyp21yuan_code/

wget https://zenodo.org/record/3601436/files/hls4ml_LHCjet_30p_train.tar.gz
mkdir -p data/30 && cat *.tar.gz | tar -xzvf - --ignore-zeros --directory data/30/
rm -rf hls4ml_LHCjet_30p_train.tar.gz

wget https://zenodo.org/record/3601436/files/hls4ml_LHCjet_30p_val.tar.gz
mkdir -p data/30 && cat *.tar.gz | tar -xzvf - --ignore-zeros --directory data/30/
rm -rf hls4ml_LHCjet_30p_val.tar.gz

python3 nn/build_dataset.py