#pragma once 

#include <iostream>
# include <memory>


class st
{
public:
    static std::shared_ptr<st> getinst ()
    {
        if(!st::inst) 
        {
            st::inst = std::shared_ptr<st>(new st(), [](st* s) { delete s;});
            std::cout << "done\n";
        }
        else  std::cout << "fail\n";
        return st::inst;
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
    static std::shared_ptr<st> inst;
};

std::shared_ptr<st> st::inst = nullptr;