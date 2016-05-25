#include "tansig.h"

/*!
    Functions simulates feedforwad process.
    It calculates new neuron's states and outputs.


    \param          nn_layer        layer structure
    \param          float * data    input data to the layer
    \param          int function    index of a transfer function
*/

void nn_update_layer(nn_layer layer, float *data, int fun_index){
    int number_of_neurons = layer.neuron_n;
    nn_neuron_model temp_neuron;
    int i,j;
    float sum_weight_data = 0;
    // neuronInput pointer is used only when fun_index == 2
    float *neuronInput;
    float result;


    // Do for every neuron
    for(i=0; i<number_of_neurons; i++){
        temp_neuron = *(layer.neurons + i);
        sum_weight_data = 0;
        // Do for every neuron's weight
        for (j=0; j<temp_neuron.input_N; j++){
            sum_weight_data += *(temp_neuron.weights + j)* *(data + j);
        }
        // Neuron's output (state) = tansig(bias + weight*data)
        sum_weight_data = temp_neuron.bias + sum_weight_data;
        tansig(&sum_weight_data, &result);
        temp_neuron.state = result;
        *(layer.neurons + i) = temp_neuron;
    }
}

