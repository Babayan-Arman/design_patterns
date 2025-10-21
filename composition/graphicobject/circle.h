#pragma once 

#include "graphic_object.h"

struct Circle : public GraphicObject
{
    void draw() override
    {
        std::cout << "Circle\n";
    }
};