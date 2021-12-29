import abc
import typing

import sonnet
from sonnet.dtypes import PrimitiveNumberType, PrimitiveFloatType, Float

class Parameter(abc.ABC):
    pass


class Scalar():

    template = 'scalar.xml.jinja'

    def __init__(self, name : str, default : typing.Optional[typing.Union[int,float]] = None, dtype : typing.Union[typing.Type[PrimitiveNumberType], PrimitiveNumberType] = Float()) -> None:
        
        if default is not None:
            default = float(default) if isinstance(dtype, PrimitiveFloatType) else int(default)

        self.name = name
        self.default = default
        self.dtype = dtype
        self.type = dtype.dtype()

    def xml(self) -> str :
        
        """
            Output xml schema for scalar fild.

            Examples:
            <Scalar name="seed" type="uint32_t"/>
            <Scalar name="refractory" type="uint32_t" default="0"/> 
            <Scalar name="a" type="float" default="0.02"/>
        """

        return sonnet.env.get_template(self.template).render(p=self) 
    

class Tuple():
    
    def __init__(self) -> None:
        raise NotImplementedError


class Array():

    def __init__(self) -> None:
        raise NotImplementedError