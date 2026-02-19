#ifndef FACILIS_UI_HPP
#define FACILIS_UI_HPP

#include <string>
#include <iostream>

namespace facilis
{
    namespace ui
    {
        void clear()
        {
            std::cout << "\033[2J\033[1;1H";
        }

        void set_color(int color_code)
        {
            std::cout << "\033[1;" << color_code << "m";
        }

        void reset()
        {
            std::cout << "\033[0m";
        }

        void draw_box(const std::string &title, const std::string &content)
        {
            std::cout << "##########################" << std::endl;
            std::cout << "# " << title << std::endl;
            std::cout << "--------------------------" << std::endl;
            std::cout << "# " << content << std::endl;
            std::cout << "##########################" << std::endl;
        }
    }
}

#endif