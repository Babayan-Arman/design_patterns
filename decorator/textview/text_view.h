#pragma once 

#include "visual_component.h"

struct text_view : public visual_component
{
    void draw() override
    {
        std::cout << "some text\n";
    }
};