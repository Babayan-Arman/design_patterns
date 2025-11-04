#pragma once

#include "graphic_object.h"
#include "decorator_intf.h"
#include <string>

class border_decorator : public decorator_intf
{
public:
    border_decorator(GraphicObject* shape) : decorator_intf(shape)
    {
        width = 1;
    }

    virtual void set_value(std::string value)
    {
        for(auto x : value)
        {
            if(!std::isdigit(x))
                return;
        }
        width = std::stoi(value);
    }

    void draw() override
    {
        decorator_intf::draw();
        std::cout << "added " << width <<" width border\n";
    }
    
private:
    int width;
};