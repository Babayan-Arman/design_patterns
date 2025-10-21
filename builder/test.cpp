#include "maker.h"
#include "pizzawithchese.h"
#include "pizzawithpeperoni.h"

int main()
{
    pizzawithchese p1;
    pizzawithpeperoni p2;

    maker b;
    std::cout << "\tmake pizza with chese\n\n";
    b.cook(p1);
    std::cout << "\n\n\tmake pizza with peperoni\n\n";
    b.cook(p2);
    std::cout << "\n\n";


    return 0;
}