#pragma once

#include <iostream>

class NewLibrary
{
public:
    NewLibrary() {}

    virtual void dosomethingnew (int input) 
    {
        if(input>0)
            std::cout << "somethig new happen, input = " << input << "\n";
        else 
            std::cout << "somethig wrong happen\n";
    }
};