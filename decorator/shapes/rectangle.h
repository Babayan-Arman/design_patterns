#pragma once 

#include "graphic_object.h"

struct Rectangle : public GraphicObject
{
    void draw() override
    {
        std::cout << "Rectangle\n";
    }
};