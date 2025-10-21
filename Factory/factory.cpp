#include "factory.h"

int main()
{
    DrinkFactory factory;

    std::unique_ptr<HotDrink> tea = factory.makeDrink("Tea", 100);
    std::unique_ptr<HotDrink> coffee = factory.makeDrink("Coffee", 80);


    return 0;
}