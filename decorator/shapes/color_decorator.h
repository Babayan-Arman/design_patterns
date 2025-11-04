#pragma once

#include "graphic_object.h"
#include "decorator_intf.h"

class color_decorator : public decorator_intf
{
public:
    color_decorator(GraphicObject* shape) : decorator_intf(shape)
    {
        color = "transparent";
    }

    virtual void set_value (std::string value) 
    {
        color = value;
    }

    void draw() override
    {
        decorator_intf::draw();
        if(color == "transparent")
            std::cout << "no color\n";
        else
            std::cout << "added " << color <<" color\n";
    }

private:
    std::string color;
};