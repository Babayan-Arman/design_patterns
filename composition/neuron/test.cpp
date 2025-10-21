#include "neuron.h"

int main ()
{
    NeuronLayer g1("first");
    NeuronLayer g2("second");
    NeuronLayer g3("third");
    NeuronLayer g4("fourth");
    NeuronLayer pre1("out1");
    NeuronLayer pre2("out2");

    NeuronLayer f1("last");

    Neuron a1;
    Neuron a2;
    Neuron a3;
    Neuron a4;
    Neuron a5;
    Neuron a6;
    Neuron a7;
    Neuron a8;

    g1.connect_to<Neuron>(a1); 
    g1.connect_to<Neuron>(a2); 
    g1.connect_to<Neuron>(a3); 
    g1.connect_to<Neuron>(a6); 
    g1.connect_to<Neuron>(a8); 
    
    g2.connect_to<Neuron>(a2); 
    g2.connect_to<Neuron>(a3); 
    g2.connect_to<Neuron>(a4); 
    g2.connect_to<Neuron>(a7); 
    
    g3.connect_to<Neuron>(a2);
    g3.connect_to<Neuron>(a4);
    g3.connect_to<Neuron>(a6);
    g3.connect_to<Neuron>(a8);
    
    g4.connect_to<Neuron>(a5);
    g4.connect_to<Neuron>(a8);

    pre1.connect_to<NeuronLayer>(g1);
    pre1.connect_to<NeuronLayer>(g2);

    pre2.connect_to<NeuronLayer>(g3);
    pre2.connect_to<NeuronLayer>(g4);

    f1.connect_to<NeuronLayer>(pre1);
    f1.connect_to<NeuronLayer>(pre2);

    std::cout << "start\n";
    f1.show();
    

    return 0;
}