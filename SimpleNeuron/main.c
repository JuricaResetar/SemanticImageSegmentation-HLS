#include <stdio.h>
#include <stdlib.h>
#include "tansig.h"

int main(){
    nn_network network;
    nn_layer layer;
    nn_neuron_model neuron;
    nn_neuron_model neuroni[2];

    float data[4] = {1,2,3,4};
    float weights1[4] = {0.2233, 0.3322, 0.4422, 0.6633};
    float weights2[4] = {0.3322, 0.4422, 0.6633, 0.2233};

    int i;


    neuron.bias = -3;
    neuron.weights = weights1;
    neuron.index = 0;
    neuron.input_N = 4;

    // Add neuron to neuroni field
    neuroni[0] = neuron;

    neuron.bias = -2.2;
    neuron.weights = weights2;
    neuron.index = 1;
    neuron.input_N = 4;
    // Add neuron to the neuroni field
    neuroni[1] = neuron;



    // Add neurons to the layer
    layer.neuron_n = 2;
    layer.index = 0;
    layer.neurons = neuroni;



    // Add layer to the network
    //*network.layers = layer;			// ONEMOGUCUJE PRINATANJE



    nn_update_layer(layer, data, 1);


	for(i=0; i<2; i++){
		neuron = *(layer.neurons + i);
		printf("%f\n", neuron.state);
	}

    return 0;
}
