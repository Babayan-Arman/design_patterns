#pragma once 

#include "GUIPlatform.h"


class Application 
{
public: 
    Application(GUIPlatform* platform) : m_platform(platform){}
    void run()
    {
        if(!m_platform)
        {
            return;
        }
        m_platform->createWindow("Application");
        m_platform->createButton("Button1");
        m_platform->createButton("Button2");
        m_platform->renderWindow();
    }
private:
    GUIPlatform* m_platform;
};