#ifndef LAPTOP_MEMORY_INFO_HPP
#define LAPTOP_MEMORY_INFO_HPP

#include <iostream>
#include <string>


class Laptop_Memory_Info {
private:
    short int RAM_Size, Max_M_Supported, M_Clock_Speed, Hard_Drive_Size;
    std::string M_Technology, Comp_Memory_Type, Hard_Drive_Description, Hard_Drive_Interface, Optical_Drive_Type;

public:
    Laptop_Memory_Info(short int, std::string, std::string, short int, short int, short int, std::string, std::string, std::string); // Only Declaration

    void show(); // Only Declaration
};

#endif // LAPTOP_MEMORY_INFO_HPP
