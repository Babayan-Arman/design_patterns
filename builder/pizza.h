#pragma once

#include <iostream>

class pizza
{
public:
    pizza ()
    {
        description += "Pizza";
    }

    void added_main_ingredient (std::string ingredient)
    {
        description += " with "+  ingredient;

    }

    void added_souce (std::string souce)
    {
        description += " with "+  souce;

    }
    
    void added_garnish (std::string garnish)
    {
        description += " with "+  garnish;

    }

    void get_pizza()
    {
        std::cout << description << "\n";
    }
private:
    std::string description; 

};