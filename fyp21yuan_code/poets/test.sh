# Compile network
echo "Building graph provider"
tools/compile_graph_as_provider.sh test_network.xml
# graph_schema-4.2.0/tools/compile_graph_as_provider.sh $1.xml

# Remove old compiled graph
echo "Remove old provider"
rm -f providers/test_network.graph.so
# rm -f graph_schema-4.2.0/providers/$1.graph.so

# Move new compiled graph to providers
echo "Move provider to providers folder..."
mv test_network.graph.so providers

# CD into graph_schema thing because I can't do it directly
cd graph_schema-4.2.0

# Run epoch_sim
echo "Running epoch_sim"
bin/epoch_sim test_network.xml 2> log.txt
