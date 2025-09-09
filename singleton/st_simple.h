#pragma once 

#include <iostream>

class st
{
public:
    static st* getinst ()
    {
        if(inst == nullptr) 
        {
            inst = new st();
            std::cout << "done\n";
        }
        else  std::cout << "fail\n";
        return inst;
    }

private:
    st()
    {
        std::cout << "ST CONSTRUCTOR\n\n";
    }
    ~st()
    {
        std::cout << "ST DESTRUCTOR\n\n";
    }
    static st* inst;
};

st* st::inst = nullptr;