#pragma once

#include "pizzamaker.h"

class maker
{
public:
   void cook(pizzamaker& bakery)
   {
        bakery.add_main_ingredient();
        bakery.add_souce();
        bakery.add_garnish();
        bakery.get_pizza();
   }
};