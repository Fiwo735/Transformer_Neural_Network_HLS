import sys
import os

module_path = os.path.join(os.path.join(os.pardir, os.pardir), os.pardir)

if module_path not in sys.path:
    sys.path.append(module_path)