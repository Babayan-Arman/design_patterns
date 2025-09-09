#include "st_sharedp.h"

int main ()
{
    std::shared_ptr<st> a1 = st::getinst();
    std::shared_ptr<st> a2 = st::getinst();
    std::shared_ptr<st> a3 = st::getinst();
    std::shared_ptr<st> a4 = st::getinst();
    std::shared_ptr<st> a5 = st::getinst();

    return 0;
}