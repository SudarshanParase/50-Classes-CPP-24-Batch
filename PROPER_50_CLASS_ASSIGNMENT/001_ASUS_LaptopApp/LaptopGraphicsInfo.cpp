#include "LaptopGraphicsInfo.hpp"
#include <iostream>

Laptop_Graphics_Info::Laptop_Graphics_Info(std::string c, std::string b, std::string d, std::string r, short int s, std::string i)
    : G_Coprocessor(c), G_Chipset_Brand(b), G_Card_Description(d), G_RAM_Type(r),
      G_Card_Ram_Size(s), G_Card_Interface(i) {}

void Laptop_Graphics_Info::show() 
{
    std::cout << "------------------------LAPTOP GRAPHICS INFO-------------------------" << std::endl;

    std::cout << "Graphics Coprocessor          : " << G_Coprocessor << std::endl;
    std::cout << "Graphics Chipset Brand        : " << G_Chipset_Brand << std::endl;
    std::cout << "Graphics Card Description     : " << G_Card_Description << std::endl;
    std::cout << "Graphics RAM Type             : " << G_RAM_Type << std::endl;
    std::cout << "Graphics Card Ram Size        : " << G_Card_Ram_Size << " GB" << std::endl;
    std::cout << "Graphics Card Interface       : " << G_Card_Interface << std::endl << std::endl;
}
