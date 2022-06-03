import torch
from torch_mlir.dialects.torch.importer.jit_ir import ClassAnnotator, ModuleBuilder
from model.net import ConstituentNet

script_module = torch.jit.script(ConstituentNet())

ca = ClassAnnotator()
ca.exportNone(script_module._c._type())
ca.exportPath(script_module._c._type(), ["forward"])
ca.annotateArgs(
    script_module._c._type(),
    ["forward"],
    [
        None,
        ([30, 16], torch.float32, True),
    ],
)

mb = ModuleBuilder()
mb.import_module(script_module._c, ca)
mb.module.operation.print()
