#pragma once 

#include <string>

class GUIPlatform
{
public: 
    virtual ~GUIPlatform() = default;
    virtual void createWindow(const std::string& name) = 0;
    virtual void renderWindow() = 0;
    virtual void createButton(const std::string& label) = 0;
};