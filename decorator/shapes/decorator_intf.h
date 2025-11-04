#pragma once

#include "graphic_object.h"

class decorator_intf : public GraphicObject
{
public:
    decorator_intf(GraphicObject* shape) : shape{shape}
    {

    }

    virtual void set_value (std::string value) = 0;

    virtual void draw() override
    {
        shape->draw();
    }
    
private:
    GraphicObject* shape;
};