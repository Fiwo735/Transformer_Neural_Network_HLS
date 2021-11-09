from jinja2 import Environment, FileSystemLoader

device_instances = [

]

edge_instances = [

]

if __name__ == '__main__':

    # Create environment
    file_loader = FileSystemLoader('templates')
    env = Environment(loader=file_loader)

    # Load template
    template = env.get_template('app.xml.jinja').render(
        message_file='components/message.xml',
        device_file='components/device.xml',
        graph={'id':"test_network"},
        device_instances=device_instances,
        edge_instances=edge_instances
    )
    
    # Make graph
    with open('out/out.xml', 'w') as f:
        f.write(template)