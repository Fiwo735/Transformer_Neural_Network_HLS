import abc
import typing
import functools
import itertools
import inspect
import sys

import sonnet
from sonnet.dtypes import PrimitiveNumberType 
from sonnet.parameters import Scalar

class Message(abc.ABC):

    """
        Base Message Class.
    """

    _ids = itertools.count(0)
    template = 'message.xml.jinja'
    
    def __init__(self):
        self.id = f"{self.message_id}_{next(self._ids)}"

    @property
    def message_id(self) -> str :
        return self.__class__.__name__.lower()

    @property
    def contents(self) -> typing.Optional[typing.List] :
        contents = []
        for attribute_name, attribute in vars(self.__class__).items():
            if isinstance(attribute, PrimitiveNumberType):
                    contents.append(Scalar(attribute_name, attribute.value, attribute))
        return contents if len(contents) else None

    @classmethod
    def id(cls) -> str :
        return cls.__name__.lower()

    @classmethod
    def xml(cls) -> str :
        params = [None] * (cls.__init__.__code__.co_argcount - 1) # subtract self
        instance = cls(*params)
        return sonnet.env.get_template(instance.template).render(m=instance)  


class Device(abc.ABC):

    """
        Base Device Class.
    """

    _ids = itertools.count(0)
    template = 'device.xml.jinja'

    def __init__(self):
        self.id = f"{self.device_id}_{next(self._ids)}"
    
    def __str__(self) -> str:
        output = ""
        for attribute_name, attribute in vars(self).items():
            if isinstance(attribute, PrimitiveNumberType):
                output +=  f" {attribute_name}:{attribute}"

        return f"<{self.__class__.__name__}{output}>"
    
    @property
    def device_id(self) -> str :
        return self.__class__.__name__.lower()

    @property
    def states(self) -> typing.Optional[typing.List] :
        states = []
        for attribute_name, attribute in vars(self.__class__).items():
            if isinstance(attribute, PrimitiveNumberType):
                    states.append(Scalar(attribute_name, attribute.value, attribute))
        return states if len(states) else None
    
    @property
    def properties(self) -> typing.Optional[typing.List] :
        properties = []
        for attribute_name, attribute in vars(self).items():
            if isinstance(attribute, PrimitiveNumberType):
                    properties.append(Scalar(attribute_name, attribute.value, attribute))
        return properties if len(properties) else None
    
    @property
    def inputPins(self) -> typing.List :

        pins = ( 
            (func, getattr(self.__class__, func)) 
                for func in dir(self.__class__) 
                if hasattr(getattr(self.__class__, func), 'input_pin')
        )

        try:
            pins = [
                InputPin(
                    name=pin_name, 
                    message=pin.message, 
                    on_receive=pin(self), 
                    properties=self.dict_to_properties(pin.properties)
                ) for pin_name, pin in pins
            ]
            return pins
        
        except ValueError as e:
            raise
    
    @property
    def outputPins(self) -> typing.List :

        pins = ( 
            (func, getattr(self.__class__, func)) 
                for func in dir(self.__class__) 
                if hasattr(getattr(self.__class__, func), 'output_pin')
        )
                
        return [
            OutputPin(
                name=pin_name, 
                message=pin.message, 
                on_send=pin(self), 
                properties=self.dict_to_properties(pin.properties) 
            ) for pin_name, pin in pins
        ]

    @property
    def onInit(self) -> str :
        return self.on_init()

    @property
    def readyToSend(self) -> str :
        return self.ready_to_send()

    @abc.abstractmethod
    def on_init(self) -> str : 
        pass

    @abc.abstractmethod
    def ready_to_send(self) -> str : 
        pass
    
    @staticmethod
    def dict_to_properties(dict : typing.Dict[str, typing.Union[PrimitiveNumberType, typing.Type[PrimitiveNumberType]]]) -> typing.Optional[typing.List[Scalar]] :

        if dict is None:
            return None

        properties = []
        for property_name, property in dict.items():
            if isinstance(property, PrimitiveNumberType):
                properties.append(Scalar(name=property_name, default=property.value, dtype=property))
            elif inspect.isclass(property) and issubclass(property, PrimitiveNumberType):
                properties.append(Scalar(name=property_name, dtype=property))
            elif isinstance(property, Scalar):
                properties.append(property)
            else:
                raise ValueError(f"Unknow property type {type(property)}, {{`{property_name}` : {property}}} ")
        return properties if len(properties) else None

    @classmethod
    def id(cls) -> str :
        return cls.__name__.lower()

    @classmethod
    def xml(cls) -> str :        
        params = [None] * (cls.__init__.__code__.co_argcount - 1) # subtract self
        instance = cls(*params)
        return sonnet.env.get_template(instance.template).render(d=instance)
    

class InputPin():

    """
        Input-pin class
    """

    template = 'input-pin.xml.jinja'

    def __init__(self, name : str, message : Message, on_receive : str, properties : typing.Optional[typing.List[Scalar]] = None) -> None:
        self.name = name
        self.message = message
        self.on_receive = on_receive
        self.properties = properties
    
    @property
    def messageTypeId(self) -> str :
        return self.message.message_id
    
    @property
    def onReceive(self) -> str :
        return self.on_receive

    def xml(self) -> str :
        return sonnet.env.get_template(self.template).render(pin=self)
    

class OutputPin():

    """
        Output-pin class
    """

    template = 'output-pin.xml.jinja'

    def __init__(self, name : str, message : Message, on_send : str, properties : typing.Optional[typing.List[Scalar]] = None) -> None:
        self.name = name
        self.message = message
        self.on_send = on_send
        self.properties = properties
    
    @property
    def messageTypeId(self) -> str :
        return self.message.message_id
    
    @property
    def onSend(self) -> str :
        return self.on_send

    def xml(self) -> str :
        raise sonnet.env.get_template(self.template).render(pin=self)


def input_pin(message: Message, dict : typing.Optional[typing.Dict] = None):

    """
        Meta-decorator class to specify device input pin.
    """

    def input_pin_decorator(method : typing.Callable[[Device, Message], str]):

        @functools.wraps(method)
        def wrapper(*args, **kwargs):
            return method(*args, **kwargs)
        
        setattr(wrapper, 'input_pin', True)
        setattr(wrapper, 'message', message)
        setattr(wrapper, 'properties', dict )

        return wrapper
    return input_pin_decorator


def output_pin(message: Message, dict : typing.Optional[typing.Dict] = None):

    """
        Meta-decorator class to specify device output pin.
    """

    def output_pin_decorator(method : typing.Callable[[Device, Message], str]):

        @functools.wraps(method)
        def wrapper(*args, **kwargs):
            return method(*args, **kwargs)
        
        setattr(wrapper, 'output_pin', True)
        setattr(wrapper, 'message', message)
        setattr(wrapper, 'properties', dict )

        return wrapper
    return output_pin_decorator
