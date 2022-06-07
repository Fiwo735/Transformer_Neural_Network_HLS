
for num_transformers in 1 2 3; do
  for embbed_dim in 16 32 64; do
    for num_heads in 3 4; do
      command="python3 -u pytorch/train_evaluate.py --particles 30 --train --epochs 20 --x_type float32 --num_transformers ${num_transformers} --embbed_dim ${embbed_dim} --num_heads ${num_heads}"
      eval $command
    done
  done
done