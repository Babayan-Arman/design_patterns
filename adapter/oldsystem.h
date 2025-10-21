#pragma once

#include <iostream>

class OldSystem
{
public:
    OldSystem() {}

    virtual void dosomethingold (std::string input) = 0;
};