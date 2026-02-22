#include "facilis.hpp" // Now it's single defined

int main()
{
    facilis::ui::clear();
    facilis::ui::set_color(32);

    facilis::ui::draw_box("FACILIS", "System initialized");

    facilis::ui::reset();

    facilis::cout("\n Hello World!");
    facilis::cin("");

    return 0;
}