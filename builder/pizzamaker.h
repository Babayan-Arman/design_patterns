#pragma once

#include <iostream>

class pizzamaker
{
public:
    virtual void add_main_ingredient() = 0;
    virtual void add_souce() = 0;
    virtual void add_garnish() = 0;
    virtual void get_pizza() = 0;
};