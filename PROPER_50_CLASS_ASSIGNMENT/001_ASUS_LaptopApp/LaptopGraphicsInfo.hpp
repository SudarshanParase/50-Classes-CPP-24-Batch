#ifndef LAPTOP_GRAPHICS_INFO_HPP
#define LAPTOP_GRAPHICS_INFO_HPP

#include <iostream>
#include <string>


class Laptop_Graphics_Info {
private:
    std::string G_Coprocessor;
    std::string G_Chipset_Brand;
    std::string G_Card_Description;
    std::string G_RAM_Type;
    short int G_Card_Ram_Size;
    std::string G_Card_Interface;

public:
    Laptop_Graphics_Info(std::string, std::string, std::string, std::string, short int, std::string); // Only Declaration

    void show(); // Only Declaration
};

#endif // LAPTOP_GRAPHICS_INFO_HPP
