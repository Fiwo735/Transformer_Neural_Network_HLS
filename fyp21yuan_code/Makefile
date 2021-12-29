.PHONY: data-30 data-50 data-100 data-150 data-old build-dataset tensorboard jupyter-notebook jupyter-lab run search-hyperparams

data: data-old build-dataset

data-30:
	wget https://zenodo.org/record/3601436/files/hls4ml_LHCjet_30p_train.tar.gz https://zenodo.org/record/3601436/files/hls4ml_LHCjet_30p_val.tar.gz
	mkdir -p data/30 && cat *.tar.gz | tar -xzvf - --ignore-zeros --directory data/30/

data-50:
	wget https://zenodo.org/record/3601443/files/hls4ml_LHCjet_50p_train.tar.gz https://zenodo.org/record/3601443/files/hls4ml_LHCjet_50p_val.tar.gz
	mkdir -p data/50 && cat *.tar.gz | tar -xzvf - --ignore-zeros --directory data/50/

data-100:
	wget https://zenodo.org/record/3602254/files/hls4ml_LHCjet_100p_train.tar.gz https://zenodo.org/record/3602254/files/hls4ml_LHCjet_100p_val.tar.gz
	mkdir -p data/100 && cat *.tar.gz | tar -xzvf - --ignore-zeros --directory data/100/

data-150:
	wget https://zenodo.org/record/3602260/files/hls4ml_LHCjet_150p_train.tar.gz https://zenodo.org/record/3602260/files/hls4ml_LHCjet_150p_val.tar.gz
	mkdir -p data/150 && cat *.tar.gz | tar -xzvf - --ignore-zeros --directory data/150/

data-old:
	wget -P data/ https://raw.githubusercontent.com/pierinim/tutorials/master/Data/JetDataset/jetImage_7_100p_0_10000.h5 \
	https://raw.githubusercontent.com/pierinim/tutorials/master/Data/JetDataset/jetImage_7_100p_10000_20000.h5 \
	https://raw.githubusercontent.com/pierinim/tutorials/master/Data/JetDataset/jetImage_7_100p_30000_40000.h5 \
	https://raw.githubusercontent.com/pierinim/tutorials/master/Data/JetDataset/jetImage_7_100p_40000_50000.h5 \
	https://raw.githubusercontent.com/pierinim/tutorials/master/Data/JetDataset/jetImage_7_100p_50000_60000.h5 \
	https://raw.githubusercontent.com/pierinim/tutorials/master/Data/JetDataset/jetImage_7_100p_60000_70000.h5 \
	https://raw.githubusercontent.com/pierinim/tutorials/master/Data/JetDataset/jetImage_7_100p_70000_80000.h5 \
	https://raw.githubusercontent.com/pierinim/tutorials/master/Data/JetDataset/jetImage_7_100p_80000_90000.h5

build-dataset:
	python3 nn/build_dataset.py 

tb: tensorboard

tensorboard:
	tensorboard --logdir=experiments --port=8888 --bind_all

jt: jupyter-notebook

jupyter-notebook:
	jupyter notebook

jl: jupyter-lab

jupyter-lab:
	jupyter lab

run:
	python3 nn/train.py --model_dir experiments/base_model

search: search-hyperparams

search-hyperparams:
	python3 nn/search-hyperparams.py --parent_dir experiments/learning_rate
