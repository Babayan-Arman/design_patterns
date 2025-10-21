#include "adapter.h"

int main()
{
    Adapter a;

    std::cout << "\tTest 1 \n\n";
    a.dosomethingold("play");
    
    std::cout << "\n\n\tTest 2 \n\n";
    a.dosomethingold("1234");
    
    std::cout << "\n\n\tTest 3 \n\n";
    a.dosomethingold("1234a");
    
    return 0;
}
