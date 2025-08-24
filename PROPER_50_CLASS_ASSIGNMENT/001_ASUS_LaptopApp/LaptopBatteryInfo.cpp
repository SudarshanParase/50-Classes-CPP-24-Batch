#include "LaptopBatteryInfo.hpp"
#include <iostream>

Laptop_Battery_Info::Laptop_Battery_Info(short int v, char i, short int c)
    : Voltage(v), Are_Batteries_Included(i), No_Of_Lithium_Ion_Cells(c) {}

void Laptop_Battery_Info::show() 
{
    std::cout << "------------------------LAPTOP BATTERY INFO-------------------------" << std::endl;

    std::cout << "Voltage                       : " << Voltage << " Volts" << std::endl;
    std::cout << "Are Batteries Included        : " << Are_Batteries_Included  << std::endl;
    std::cout << "Number of Lithium Ion Cells   : " << No_Of_Lithium_Ion_Cells << std::endl << std::endl;
}
