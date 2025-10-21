#pragma once 

#include "graphic_object.h"

struct Triangle : public GraphicObject
{
    void draw() override
    {
        std::cout << "Triangle\n";
    }
};