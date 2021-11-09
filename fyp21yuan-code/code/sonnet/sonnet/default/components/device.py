import sonnet
from sonnet.models import  Device, input_pin, output_pin

from components.message import Synapse

class Neuron(Device):

    # States
 
    def __init__(self, seed, Ir, fanin, a=None, b=None, c=None, d=None): # 
        super().__init__()

        # Properties
        
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
            