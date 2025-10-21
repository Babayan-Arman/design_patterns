#pragma once
#include "oldsystem.h"
#include "newlibrary.h"
#include <string>

class Adapter : public OldSystem
{
public:
    Adapter() {}

    virtual void dosomethingold (std::string input)
    {
        int temp;
        for(auto x : input)
        {
            if(!(std::isdigit(x)))
            {
                temp = -1;
                break;
            }
            temp = std::stoi(input);
        }

        nl.dosomethingnew(temp);
    }

private:
    NewLibrary nl;
};
