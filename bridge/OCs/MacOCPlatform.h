#pragma once 

#include "GUIPlatform.h"

#include <iostream>

class MacOCPlatform : public GUIPlatform
{
public: 
    void createWindow(const std::string& name) override
    {
        std::cout << "Created window with title " << name << " in MacOC OS\n";
    }
    void renderWindow() override
    {
        std::cout << "Rendering window in MacOC OS\n";
    }
    void createButton(const std::string& label) override
    {
        std::cout << "Created button with title " << label << " in MacOC OS\n";
    }
};