#include "Application.h"
#include "MacOCPlatform.h"
#include "WindowsPlatform.h"
#include "LinuxOCPlatform.h"

int main ()
{
    WindowsPlatform win_p;
    MacOCPlatform mac_p;
    LinuxOCPlatform lin_p;

    Application app1(&win_p);
    Application app2(&mac_p);
    Application app3(&lin_p);

    app1.run();
    app2.run();
    app3.run();

}