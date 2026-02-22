#ifndef FACILIS_FILES_HPP
#define FACILIS_FILES_HPP

#include <string>
#include <fstream>
#include <filesystem>

namespace facilis
{
    namespace fs = std::filesystem;

    inline void write(const std::string &path, const std::string &content)
    {
        std::ofstream file(path);
        file << content;
    }

    inline std::string read(const std::string &path)
    {
        if (!fs::exists(path))
            return "Error: File not found.";
        std::ifstream file(path);
        return std::string((std::istreambuf_iterator<char>(file)),
                           std::istreambuf_iterator<char>());
    }
}

#endif