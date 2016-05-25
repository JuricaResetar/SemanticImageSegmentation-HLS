/*!
Header with all functions and structures declarations
*/
#include <stdio.h>
#ifndef NNFunctions_H_   /* Include guard */
#define NNFunctions_H_
#endif

//! Structure describes artificial neuron's parameters
typedef struct nn_neuron_model_{
    int type;               /*!< Neuron type */
    int input_N;            /*!< Number of inputs to a neuron */
    int index;              /*!< Index of a neuron */
    int function_type;      /*!< Neuron's transfer function  */
    int * prev_lay_n_ind;   /*!< Neurons (indexes) from previous layer a neuron is connected with */
    int layer;              /*!< Layer which neuron belongs to */
    float bias;             /*!< Bias values */
    float * weights;        /*!< The neuron's weights */
    float state;            /*!< The neuron's output */
}nn_neuron_model;


//! Structure describes artificial neural layer and its parameters
typedef struct nn_layer_{
    int index;                  /*!< The layer's index */
    int neuron_n;               /*!< Number of neurons in a layer */
    nn_neuron_model *neurons;   /*!< Neurons within a layer */
}nn_layer;


//! Structure describes artificial neural network and its parameters
typedef struct nn_network_{
    int layer_n;        /*!< Number of layers in a network */
    nn_layer *layers;   /*!< Layers within network */
}nn_network;

//! Function declarations:
void nn_tansig_apply(float *data, float* results);
void nn_update_layer(nn_layer layer, float *data, int fun_index);



