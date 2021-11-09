# Sonnet

Sonnet is a very lightweight companion Python library to bootstrap and
build POETS graph_schema application.

## Features

- Support boostraping the graph_schema application with ``default`` template
- Support pythonic object-oriented definition for  ``message`` and ``device`` types
- Support automatic xml generation of ``message`` and ``device`` defined with *Python* classes
- Command-line interface included


## Quickstart

This guide is only meant to cover the most basic usage of the library. 

### Installation

Sonnet currently is at local development stage, and Pypi support will added
later.

To install using local wheel

```bash
$ make reload
```

### Using the cli

Cli is the most convenient way to use sonnet.

To start a new graph_schema application

```bash
$ sonnet init my_app
```

To build ``message`` and ``device`` (default in ``components`` folder)

```bash
$ cd my_app
$ sonnet build
```

### Using in python script

Define ``message`` and ``device`` using python classes

```python
import sonnet
from sonnet.models import  Device, input_pin, output_pin
from components.message import Synapse

class Neuron(Device):

    # States
    rng = sonnet.UInt32()
    u = sonnet.Float()
    v = sonnet.Float()
    I = sonnet.Float()
    Icount = sonnet.Float()
    pendingFires = sonnet.UInt32()
    rts = sonnet.UInt32()
    t = sonnet.UInt32()
 
    def __init__(self, seed, Ir, fanin, a=None, b=None, c=None, d=None): # 
        super().__init__()

        # Properties
        self.seed = sonnet.UInt32(seed)
        self.Ir = sonnet.Float(Ir)
        self.fanin = sonnet.UInt32(fanin)
        self.a = sonnet.Float(a, default=0)
        self.b = sonnet.Float(b, default=0)
        self.c = sonnet.Float(c, default=0)
        self.d = sonnet.Float(d, default=0)
        
    def on_init(self) -> str:
        return """

        """

    def ready_to_send(self) -> str:
        return """
           
        """
    
    @input_pin(Synapse(), {'weight' : sonnet.Float()})
    def input(self):
        return """
            
        """
    
    @output_pin(Synapse(), {'weight' : sonnet.Float()})
    def output(self):
        return """
            
        """
```