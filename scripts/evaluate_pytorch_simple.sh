eval_script="fyp21yuan_code/evaluate_simple.py"
logs="logs/"
logfile=${logs}"evaluate_simple.log"

mkdir -p ${logs}
python3 ${eval_script} > ${logfile}

hls_input=$(head -3 ${logfile} | tail -1)
hls_input_path="hls4ml_tutorial/model_1/hls4ml_prj/tb_data/tb_input_features.dat"
echo "Input data (HLS format):" ${hls_input}
echo ${hls_input} | tee ${hls_input_path}

predictions=$(tail -3 ${logfile} | head -1)
predictions_path=${logs}"pytorch_results.log"
hls_predictions_path="hls4ml_tutorial/model_1/hls4ml_prj/tb_data/tb_output_predictions.dat"
echo "Final output data:" ${predictions}
echo ${predictions} | tee ${predictions_path} ${hls_predictions_path}
