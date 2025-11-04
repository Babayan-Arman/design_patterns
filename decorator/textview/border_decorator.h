#pragma once 

#include "visual_component.h"
#include "text_decorator.h"
#include <string>

class border_decorator : public text_decorator
{
public:
    border_decorator (visual_component* text_viewer) : text_decorator(text_viewer)
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

    virtual void get_decorator_type() 
    {
        std::cout << "border decorator\n";
    }

    virtual void draw()
    {
        text_decorator::draw();
        std::cout << "with " << width << " border\n";
    }

private:
    int width;
};