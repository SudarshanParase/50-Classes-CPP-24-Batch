#include "LaptopMemoryInfo.hpp"
#include <iostream>


Laptop_Memory_Info::Laptop_Memory_Info(short int r, std::string t, std::string c, short int m, short int cs, short int h, std::string hd, std::string hi, std::string o)
    : RAM_Size(r), M_Technology(t), Comp_Memory_Type(c), Max_M_Supported(m), M_Clock_Speed(cs),
      Hard_Drive_Size(h), Hard_Drive_Description(hd), Hard_Drive_Interface(hi), Optical_Drive_Type(o) {}

void Laptop_Memory_Info::show() 
{
    std::cout << "-------------------------LAPTOP MEMORY INFO---------------------------" << std::endl;

    std::cout << "RAM Size                      : " << RAM_Size << " GB" << std::endl;
    std::cout << "Memory Technology             : " << M_Technology << std::endl;
    std::cout << "Computer Memory Type          : " << Comp_Memory_Type << std::endl;
    std::cout << "Maximum Memory Supported      : " << Max_M_Supported << " GB" << std::endl;
    std::cout << "Memory Clock Speed            : " << M_Clock_Speed << " MHz" << std::endl;
    std::cout << "Hard Drive Size               : " << Hard_Drive_Size << " TB" << std::endl;
    std::cout << "Hard Drive Description        : " << Hard_Drive_Description << std::endl;
    std::cout << "Hard Drive Interface          : " << Hard_Drive_Interface << std::endl;
    std::cout << "Optical Drive Type            : " << Optical_Drive_Type << std::endl << std::endl;
}