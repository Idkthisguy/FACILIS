#include "facilis.hpp"
#include "ui.hpp"

int main()
{
    facilis::ui::clear();
    facilis::ui::set_color(32);

    facilis::ui::draw_box("FACILIS", "System initialized");
}