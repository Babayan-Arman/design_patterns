#include "graphic_object.h"
#include "circle.h"
#include "triangle.h"
#include "rectangle.h"
#include "group.h"

int main ()
{
    Group g1("first");
    Group g2("second");
    Circle a1,a2;
    Triangle b1,b2;
    Rectangle c1;

    g1.add_obj(&a1);
    g1.add_obj(&b1);
    g1.add_obj(&g2);

    g2.add_obj(&a2);
    g2.add_obj(&b2);
    g2.add_obj(&c1);

    std::cout << "group 2 members\n";
    g2.draw();
    
    std::cout << "\ngroup 1 members\n";
    g1.draw();

    return 0;
}