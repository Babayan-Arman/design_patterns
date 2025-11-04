#pragma once 

#include "visual_component.h"

class text_decorator : public visual_component
{
public:
    text_decorator (visual_component* text_viewer) : text_viewer{text_viewer}
    {

    }

    virtual void get_decorator_type() = 0;

    virtual void draw()
    {
        text_viewer->draw();
    }

private:
    visual_component* text_viewer;
};