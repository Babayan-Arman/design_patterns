#include "scroll_decorator.h"
#include "border_decorator.h"
#include "text_view.h"

int main()
{
    text_view txt;

    std::cout << "start\n\n";

    txt.draw();
    std::cout << "\n\n\n";

    border_decorator bordered_txt(&txt);

    bordered_txt.get_decorator_type();
    bordered_txt.draw();

    bordered_txt.set_value("5");
    std::cout << "\n\n\n";

    scroll_decorator scrolled_txt(&bordered_txt);

    scrolled_txt.get_decorator_type();
    scrolled_txt.draw();

    std::cout << "\n\n\n";

    scrolled_txt.scroll_up(6);
    scrolled_txt.scroll_right(19);

    scrolled_txt.draw();

    std::cout << "\n\n\n";

    scrolled_txt.scroll_down(4);
    scrolled_txt.scroll_left(12);

    scrolled_txt.draw();


    return 0;
}