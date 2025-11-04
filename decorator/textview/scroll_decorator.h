#pragma once 

#include "visual_component.h"
#include "border_decorator.h"

class scroll_decorator : public text_decorator
{
public:
    scroll_decorator (visual_component* text_viewer) : text_decorator(text_viewer)
    {
        width = 0;
        length = 0;
    }

    virtual void get_decorator_type() 
    {
        std::cout << "scroll decorator\n";
    }

    void scroll_left (int left)
    {
        length = abs(length - left);
    }

    void scroll_right (int right)
    {
        length = (length + right)%100;
    }

    void scroll_down (int down)
    {
        width = abs(width - down);
    }

    void scroll_up (int up)
    {
        width = (width + up)%100;
    }

    virtual void draw()
    {
        text_decorator::draw();
        std::cout << "x =  " << length << " y = " <<  width << "\n";
    }

private:
    int width;
    int length;
};