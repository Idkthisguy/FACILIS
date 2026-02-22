#ifndef FACILIS_FILES_HPP
#define FACILIS_FILES_HPP

#include <string>
#include <fstream>
#include <filesystem>

namespace facilis
{
    namespace fs = std::filesystem;

    // directory: The folder path (e.g., "C:/Data" or "../scripts")
    // filename:  The name of the file (e.g., "config.txt")
    // content:   What you want to save

    inline void write(const std::string &directory, const std::string &filename, const std::string &content)
    {
        fs::path dir_path(directory);
        fs::path full_path = dir_path / filename;

        if (!directory.empty() && !fs::exists(dir_path))
        {
            fs::create_directories(dir_path);
        }

        std::ofstream file(full_path);
        if (file.is_open())
        {
            file << content;
            file.close();
        }
    }

    inline std::string read(const std::string &full_path_str)
    {
        fs::path path(full_path_str);
        if (!fs::exists(path))
            return "Error: File not found.";

        std::ifstream file(path);
        return std::string((std::istreambuf_iterator<char>(file)),
                           std::istreambuf_iterator<char>());
    }
}

#endif