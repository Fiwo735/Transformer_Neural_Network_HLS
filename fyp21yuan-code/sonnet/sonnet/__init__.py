# flake8: noqa: F401
# noreorder
"""
Sonnet: a companion app for POETS graph-schema application.
"""

from sonnet.version import __version__

# Primitive number types
from sonnet.dtypes import *

int64 = Int64()
uint64 = UInt64()
int32 = Int32()
uint32 = UInt32()
int16 = Int16()
uint16 = UInt16()
int8 = Int8()
uint8 = UInt8()
char = Char()
half = Half()
float = Float()
double = Double()

# Jinja2 environment
from pathlib import Path
from jinja2 import Environment, FileSystemLoader

file_loader = FileSystemLoader(Path(__file__).parent.resolve() / 'templates')
env = Environment(loader=file_loader)

