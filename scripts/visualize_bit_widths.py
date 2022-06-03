import matplotlib.pyplot as plt
import numpy as np
import re

def add_boundary(pos_after: int):
  plt.axvline(x=pos_after-0.5, linestyle='--', alpha=0.5)

def process_name(name: str, just_t: bool):
  split = name.split('_')

  if just_t:
    trimmed = split[:-1]
  else:
    trimmed = split[1:-1] if len(split) > 2 else split[0:1]

  return '_'.join(trimmed)

def process_data(data: str):
  data = data.split('\n')
  widths = []
  splits = []
  names = []

  for index, line in enumerate(data):
    if line == '':
      splits.append(len(widths))
    type_result = re.search(r'^typedef ap_fixed<([\d]+),([\d]+)> (.*);', line)
    if type_result is not None:
      widths.append((int(type_result.group(1)), int(type_result.group(2))))
      names.append(process_name(type_result.group(3), just_t=False))

  return widths, splits, names

def main(path: str, data: str):
  bit_widths, splits, names = process_data(data)

  # print(splits)
  # print([t - s for s, t in zip(splits, splits[1:])])
  # print(names)

  x_range = range(len(bit_widths))

  bit_widths_int = [i for _, i in bit_widths]
  bit_widths_frac = [-t+i for t, i in bit_widths]

  fig, ax = plt.subplots(1, figsize=(12, 6))

  # Int and frac bits data
  plt.bar(x_range, bit_widths_frac, width=0.5, color='b')
  plt.bar(x_range, bit_widths_int, width=0.5, color='r')

  # Logical boundaries as vertical lines
  for split in splits:
    add_boundary(pos_after=split)

  # Max int and frac bits on y-axis
  y_limit = max(max(bit_widths_int), max(bit_widths_frac))
  plt.ylim([-y_limit, y_limit])
  plt.yticks(np.arange(-y_limit, y_limit+1, 2))

  # Very hacky way to display negative values without the minus sign on y-axis
  fig.canvas.draw()
  ylabels = [item.get_text() for item in ax.get_yticklabels()]
  ylabels = [el[1:] if el[0] == '−' else el for el in ylabels ]
  ax.set_yticklabels(ylabels)

  # xlabels = [item.get_text() for item in ax.get_xticklabels()]
  # xlabels = ['a' for el in xlabels ]
  # ax.set_xticklabels(xlabels)
  plt.xticks(ticks=x_range, labels=names, rotation=90)

  # Hide borders
  ax.spines['right'].set_visible(False)
  ax.spines['left'].set_visible(False)
  ax.spines['top'].set_visible(False)
  ax.spines['bottom'].set_visible(False)

  # Hide x-axis
  # plt.gca().axes.get_xaxis().set_visible(False)

  # Axis, grid, title
  plt.ylabel('Fractional bit width' + ' '*int(y_limit*1.5) + 'Integer bit width')
  plt.grid(axis='y')
  plt.title('Visualization of the fixed-point precision of the types used in the model')
  
  fig.tight_layout()
  plt.savefig(path, format='png', dpi=200)
  print(f'Saved figure to {path}')
  

if __name__ == '__main__':
  data = '''
//--------------------Top--------------------
typedef ap_fixed<17,12> input_t;

typedef ap_fixed<14,12> top_embedded_t;
typedef ap_fixed<14,5> top_embedded_weight_t;
typedef ap_fixed<6,1> top_embedded_bias_t;
typedef ap_fixed<17,11> top_embedded_accum_t;

typedef ap_fixed<13,11> top_cls_token_t;
//--------------------------------------------

//--------------Self-Attention----------------
typedef ap_fixed<12,5> SA_norm_t;
typedef ap_fixed<15,3> SA_norm_weight_t;
typedef ap_fixed<10,4> SA_norm_bias_t;

typedef ap_fixed<5,4> SA_Q_t;
typedef ap_fixed<2,1> SA_Q_weight_t;
typedef ap_fixed<11,4> SA_Q_accum_t;

typedef ap_fixed<5,4> SA_K_t;
typedef ap_fixed<6,1> SA_K_weight_t;
typedef ap_fixed<10,4> SA_K_accum_t;

typedef ap_fixed<8,7> SA_V_t;
typedef ap_fixed<4,1> SA_V_weight_t;
typedef ap_fixed<15,7> SA_V_accum_t;

typedef ap_fixed<11,9> SA_energy_t;

typedef ap_fixed<7,5> SA_exp_norm_t;
typedef ap_fixed<12,1> SA_exp_norm_weight_t;
typedef ap_fixed<7,5> SA_exp_norm_bias_t;

typedef ap_fixed<12,4> SA_exp_norm_red_t; // N=12, T=4
typedef ap_fixed<18,7> SA_softmax_exp_t; // N=12, T=4
typedef ap_fixed<18,7> SA_softmax_inv_t; // N=12, T=7
#define N_SOFTMAX_TABLE 4096
#define EXP_TARGET_IWIDTH 4
#define INV_TARGET_IWIDTH 7

typedef ap_fixed<11,1> SA_attention_t;

typedef ap_fixed<15,4> SA_scaled_attention_t;

typedef ap_fixed<13,2> SA_dense_weight_t;
typedef ap_fixed<4,1> SA_dense_bias_t;
typedef ap_fixed<17,6> SA_dense_accum_t;

typedef ap_fixed<13,6> SA_result_t;
//--------------------------------------------

//----------------Transformer-----------------
typedef ap_fixed<18,11> SA_result_sum_t;

typedef ap_fixed<12,5> T_norm0_t;
typedef ap_fixed<13,3> T_norm0_weight_t;
typedef ap_fixed<11,5> T_norm0_bias_t;

typedef ap_fixed<10,4> T_activ0_t;

typedef ap_fixed<11,6> T_dense0_t;
typedef ap_fixed<10,2> T_dense0_weight_t;
typedef ap_fixed<13,6> T_dense0_accum_t;

typedef ap_fixed<15,7> T_norm1_t;
typedef ap_fixed<11,4> T_norm1_weight_t;
typedef ap_fixed<9,3> T_norm1_bias_t;

typedef ap_fixed<14,7> T_activ1_t;

typedef ap_fixed<14,7> T_dense1_t;
typedef ap_fixed<11,3> T_dense1_weight_t;
typedef ap_fixed<16,7> T_dense1_accum_t;
//--------------------------------------------

//--------------------Top--------------------
typedef ap_fixed<18,11> top_transformer_0_t;
typedef ap_fixed<13,11> top_transformer_1_t;
typedef ap_fixed<8,7> top_transformer_2_t;

typedef ap_fixed<8,7> top_mlp_dim_red_t;

typedef ap_fixed<5,3> top_norm_t;
typedef ap_fixed<6,1> top_norm_weight_t;
typedef ap_fixed<4,3> top_norm_bias_t;

typedef ap_fixed<6,4> top_mlp_t;
typedef ap_fixed<8,1> top_mlp_weight_t;
typedef ap_fixed<2,1> top_mlp_bias_t;
typedef ap_fixed<13,4> top_mlp_accum_t;

typedef ap_fixed<12,5> top_mlp_red_t; // N=12, T=5
typedef ap_fixed<12,5> top_log_softmax_exp_t; // N=12, T=5
typedef ap_fixed<13,5> top_log_softmax_log_t; // N=12, T=4
#define N_LOG_SOFTMAX_TABLE 4096
#define LOG_TARGET_IWIDTH 5
#define LOG_EXP_TARGET_IWIDTH 4

typedef ap_fixed<6,4> result_t;
'''
  
  main(path='logs/bit_width_visualization.png', data=data)