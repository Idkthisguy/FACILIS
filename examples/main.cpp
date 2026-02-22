#include "facilis.hpp"

int main()
{
    facilis::ui::clear();
    facilis::ui::draw_box("FILE TEST", "Starting Multi-Path Check...");

    std::string test_data = "Facilis System: 0.1.0-alpha works!";
    std::string filename = "test.txt";

    std::string path1 = "./" + filename;
    std::string path2 = "../src/" + filename;

    facilis::cout("Writing to local folder and src folder...");
    facilis::write(".", filename, test_data);
    facilis::write("../src", filename, test_data);

    facilis::cout("Reading back both files...");
    std::string result1 = facilis::read(path1);
    std::string result2 = facilis::read(path2);

    if (result1 == test_data && result2 == test_data)
    {
        facilis::ui::set_color(32); // Green
        facilis::cout("SUCCESS: Both files match the test data!");
    }
    else
    {
        facilis::ui::set_color(31); // Red
        facilis::cout("FAILED: One or both files failed to read correctly.");
        facilis::cout("Local Read: " + result1);
        facilis::cout("Src Read: " + result2);
    }

    facilis::ui::reset();
    facilis::cout("\nTest complete. Check your folders!");
    return 0;
}