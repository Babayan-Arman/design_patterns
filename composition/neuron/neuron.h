#pragma once
#include <iostream>
#include <vector>

// template <typename Self>
// struct SomeNeurons
// {
//     template <typename T> void connect_to(T& other)
//     {
//         for(Neuron& from : *static_cast<Self*>(this))
//         {
//             for(Neuron& to : other)
//             {
//                 from.out.push_back(&to);
//                 to.in.push_back(&from);
//             }
//         }
//     }

//     Neuron* begin() override 
//     {
//         return this;
//     }

//     Neuron* end() override
//     {
//         return this + 1;
//     }
// };


struct iNeuron 
{

    virtual void show () = 0;
    
};


struct Neuron : public iNeuron
{

    Neuron ()
    {
       static unsigned int id = 1;
       this->id = id++;
    }

    template <typename T>
    void connect_to(T& other)
    {
        out.push_back(&other);
        other.in.push_back(this);
    }

    void show() override
    {
        std::cout << "Neuron, ID = " << id << "\n";
    }


    std::vector<iNeuron*> in,out;
    unsigned int id;
};

struct NeuronLayer : public iNeuron
{


    NeuronLayer (std::string name)
    {
        this->name = name;
    }

    template <typename T>
    void connect_to(T& other)
    {
        out.push_back(&other);
        other.in.push_back(this);
    }

    
    void show() override
    {
        std::cout << "NeuronLayer " << name <<   "\n";
        for(auto&& o : out)
        {
            o->show();
        }
    }


    std::string name;
    std::vector<iNeuron*> in; 
    std::vector<iNeuron*> out; 
    
};
