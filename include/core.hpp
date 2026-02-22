#ifndef FACILIS_CORE_HPP
#define FACILIS_CORE_HPP

#include <iostream>
#include <string>

namespace facilis
{
    template <typename T>
    void cout(T message)
    {
        std::cout << message << std::endl;
    }

    inline std::string input(const std::string &prompt)
    {
        std::string val;
        std::cout << prompt;
        std::getline(std::cin, val);
        return val;
    }
}

#endif