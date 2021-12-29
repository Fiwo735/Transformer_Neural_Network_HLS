import sonnet
from sonnet.models import Message, Device, input_pin, output_pin


class Synapse(Message):
    u = sonnet.Float()
    v = sonnet.Float()


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
            deviceState->rng = deviceProperties->seed;

            deviceState->v=-65;
            deviceState->u=deviceProperties->b * deviceState->v;

            deviceState->I=deviceProperties->Ir * grng(deviceState->rng);
            deviceState->Icount=0;

            deviceState->pendingFires=1;

            deviceState->rts = RTS_FLAG_fire;
        """

    def ready_to_send(self) -> str:
        return """
            *readyToSend = (deviceState->pendingFires > 0) ? RTS_FLAG_fire : 0;
        """
    
    @input_pin(Synapse(), {'weight' : sonnet.Float()})
    def input(self):
        return """
            deviceState->Icount++;

            if(message->fired){
                deviceState->I += edgeProperties->weight; // fire at 1, (1 * weight) = weight so just add weight
            }

            if(deviceState->Icount == deviceProperties->fanin){
                deviceState->pendingFires++;
                deviceState->Icount=0;
            }
            
            handler_log(3, "Icount = %d, fanin=%d", deviceState->Icount, deviceProperties->fanin);
        """
    
    @input_pin(Synapse(), {'time' : sonnet.UInt32(), 'weight' : sonnet.Float()})
    def clock(self):
        return """
            deviceState->Icount++;

            if(deviceState->Icount == deviceProperties->fanin){
                deviceState->pendingFires++;
                deviceState->Icount=0;
            }
            
            handler_log(3, "Icount = %d, fanin=%d", deviceState->Icount, deviceProperties->fanin);
        """

    @output_pin(Synapse())
    def fire(self):
        return """
            assert(deviceState->pendingFires > 0);

            float &v=deviceState->v;
            float &u=deviceState->u;
            float &I=deviceState->I;

            v+=(0.04*v*v+5*v+140-u+I); // step 1 ms
            u+=deviceProperties->a*(deviceProperties->b*v-u); // stability

            message->fired = v >= 30;
            
            if(message->fired){
                handler_log(1, "FIRE! %i", deviceState->t);
                v=deviceProperties->c;
                u += deviceProperties->d;
            }

            deviceState->I=deviceProperties->Ir * grng(deviceState->rng);
            deviceState->Icount=0;

            deviceState->pendingFires--;

            handler_log(3, "fanin=%d", deviceProperties->fanin);

            deviceState->t++;
            if(deviceState->t > graphProperties->max_t){
                *doSend=0;
                fake_handler_exit(0);
            }
        """

if __name__ == "__main__":
    print(Neuron(1,2,3).xml())
    # print(Neuron(1,2,3).id)
    # print(Neuron(1,2,3).id)
    # print(Neuron(1,2,3).id)

    # print(Synapse().id)
    # print(Synapse().id)
    # print(Synapse().id)
