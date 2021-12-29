#!/usr/bin/env python3

import os
import sys
import typing
import importlib
import inspect
import shutil
from pathlib import Path

import click

from sonnet.models import Message, Device


"""

# sonnet init .
$ sonnet build devices

"""

@click.group()
def main():
    """
        Sonnet CLI for bootstraping graph_schema application and building graphs.
    """
    
    pass


@main.command()
@click.argument('dir', required=False, type=click.Path())
def init(dir):
    """
        Bootstrap graph_schema application.
    """
    
    dir = Path('graph_schema') if not dir else Path(dir)
    template_dir = (Path(__file__).parent / 'default').resolve()

    click.echo(f"Creating a new POETS graph_schema app in {os.path.join(os.getcwd(), dir)}")

    shutil.copytree(template_dir, os.path.join(os.getcwd(), dir), dirs_exist_ok=True)



@main.command()
@click.argument('dir', required=False, type=click.Path())
@click.argument('out', required=False, type=click.Path())
def build(dir, out):
    """
        Build device and message xml in the target directory.
    """


    dir = Path('components') if not dir else Path(dir)
    out_dir = dir if not out else Path(out)

    out_dir.mkdir(parents=True, exist_ok=True)

    click.echo(f"Compile graph types in {os.path.join(os.getcwd(), dir)}")

    # Append path to sys
    sys.path.append(os.path.join(os.getcwd()))

    # Walk through all files in the directory
    for root, dirs, files in os.walk(dir):
        for file in files:
            if file.endswith(".py") and not file.startswith('__'):

                # Load python module/file by file path
                spec = importlib.util.spec_from_file_location(file, os.path.join(root, file))
                python_module = importlib.util.module_from_spec(spec)
                spec.loader.exec_module(python_module)

                # Load all classes
                graph_classes : typing.List[typing.Union[Message, Device]] = [
                    getattr(python_module, class_name) for class_name in set(vars(python_module).keys())
                        if inspect.isclass(getattr(python_module, class_name))
                        and issubclass(getattr(python_module, class_name), (Device, Message))
                        and getattr(python_module, class_name).__module__ == file 
                ]

                # Complie each graph type to xml
                filename_out = file[:file.rfind('.')] # trim character after last dot  (e.g. neuron.gals.py -> neurons.gals.xml)
                filepath_out = f'{out_dir}/{filename_out}.xml'
                
                with open(filepath_out, 'w+') as f:
                    for graph_class in graph_classes:
                        f.write(graph_class.xml() + '\n\n')
                        click.echo(f"Compile {graph_class} in {filepath_out}.")


if __name__ == "__main__":
    main()
