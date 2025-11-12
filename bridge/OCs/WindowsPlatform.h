#pragma once 

#include "GUIPlatform.h"

#include <iostream>

class WindowsPlatform : public GUIPlatform
{
public: 
    void createWindow(const std::string& name) override
    {
        std::cout << "Created window with title " << name << " in Window OS\n";
    }
    void renderWindow() override
    {
        std::cout << "Rendering window in Windows OS\n";
    }
    void createButton(const std::string& label) override
    {
        std::cout << "Created button with title " << label << " in Window OS\n";
    }
};