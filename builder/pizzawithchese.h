#pragma once

#include "pizza.h"
#include "pizzamaker.h"


class pizzawithchese: public pizzamaker
{
public:
    virtual void add_main_ingredient() 
    {
        p.added_main_ingredient("chese");
    }
    virtual void add_souce() 
    {
        p.added_souce("mayo");
    }
    virtual void add_garnish() 
    {
        p.added_garnish("bazzil");
    }
    
    virtual void get_pizza()
    {
        p.get_pizza();
    }

private:
    pizza p;
};