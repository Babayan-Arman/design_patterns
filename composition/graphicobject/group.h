#pragma once 

#include "graphic_object.h"
#include <vector>

struct Group : public GraphicObject
{

    explicit Group(const std::string& name) : name{name} {}

    void draw() override
    {
        std::cout << "Group " << name.c_str() << " contains:\n"; 
        for(auto&& o : objects)
            o->draw(); 
    }

    void add_obj (GraphicObject* obj)
    {
        objects.push_back(obj);
    }

    std::string name;
    std::vector<GraphicObject*> objects; 
};
