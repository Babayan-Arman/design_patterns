#include "color_decorator.h"
#include "border_decorator.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <iostream>

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;
    std::cout << "\nstart\n\n";
    
    c.draw();
    r.draw();
    t.draw();
    
    std::cout << "\n\n\n";
    
    color_decorator adapt_circle(&c);
    
    adapt_circle.draw();
    
    std::cout << "\n\n";

    std::cout << "set red color\n";
    adapt_circle.set_value("red");
    adapt_circle.draw();


    std::cout << "\n\n\n";
    
    color_decorator adapt_rectangle(&r);
    adapt_rectangle.draw();
    
    std::cout << "\n\n";

    std::cout << "set blue color\n";
    adapt_circle.set_value("blue");
    adapt_circle.draw();

    std::cout << "\n\n\n";
    
    color_decorator adapt_triangle(&t);
    adapt_triangle.draw();

    std::cout << "\n\n";

    std::cout << "set green color\n";
    adapt_circle.set_value("green");
    adapt_circle.draw();

    std::cout << "\n\n\n";

    border_decorator border_circle(&c);

    border_circle.draw();

    std::cout << "\n\n";

    std::cout << "set 5 width\n";
    border_circle.set_value("5");
    border_circle.draw();

    std::cout << "\n\n\n";

    border_decorator border_rectangle(&r);

    border_rectangle.draw();

    std::cout << "\n\n";

    std::cout << "set wrong width\n";
    border_rectangle.set_value("wrong");
    border_rectangle.draw();
    
    std::cout << "\n\n\n";
    
    border_decorator border_triangle(&t);

    std::cout << "set default width\n";
    border_triangle.draw();


    
    
    return 0;
}