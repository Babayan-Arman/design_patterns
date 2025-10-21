#pragma once

#include "pizza.h"
#include "pizzamaker.h"


class pizzawithpeperoni: public pizzamaker
{
public:
    virtual void add_main_ingredient() 
    {
        p.added_main_ingredient("peperoni");
    }
    virtual void add_souce() 
    {
        p.added_souce("ketchup");
    }
    virtual void add_garnish() 
    {
        p.added_garnish("pepper");
    }
    
    virtual void get_pizza()
    {
        p.get_pizza();
    }

private:
    pizza p;
};