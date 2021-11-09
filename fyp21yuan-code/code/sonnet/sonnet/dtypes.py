import abc

class PrimitiveNumberType(abc.ABC):

    """
    Base Number Type.
        primitiveIntType => "int64_t" | "uint64_t" | "int32_t" | "uint32_t" | "int16_t" | "uint16_t" | "uint8_t" | "int8_t" | "char"
        primitiveFloatType => "half" | "float" | "double"
    """

    def __str__(self) -> str:
       return f"{self.__class__.__name__}({self.value})"

    @classmethod
    def dtype(cls) -> str:
        return  (cls.__name__ + ('_t' if cls.__name__[-1].isdigit() else '')).lower()


class PrimitiveIntType(PrimitiveNumberType):

    def __init__(self, value=None):
        self.value = int(value) if value is not None else None


class PrimitiveFloatType(PrimitiveNumberType):
    
    def __init__(self, value=None):
        self.value = float(value) if value is not None else None


class Int64(PrimitiveIntType):
    pass


class UInt64(PrimitiveIntType):
    pass


class Int32(PrimitiveIntType):
    pass


class UInt32(PrimitiveIntType):
    pass


class Int16(PrimitiveIntType):
    pass


class UInt16(PrimitiveIntType):
    pass


class Int8(PrimitiveIntType):
    pass


class UInt8(PrimitiveIntType):
    pass


class Char(PrimitiveIntType):
    pass


class Half(PrimitiveFloatType):
    pass


class Float(PrimitiveFloatType):
    pass


class Double(PrimitiveFloatType):
    pass
