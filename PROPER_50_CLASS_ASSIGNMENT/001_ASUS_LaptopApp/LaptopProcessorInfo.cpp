#include "LaptopProcessorInfo.hpp"
#include <iostream>

Laptop_Processor_Info::Laptop_Processor_Info(std::string b, std::string t, float s, short int c)
    : P_Brand(b), P_Type(t), P_Speed(s), P_Count(c) {}

void Laptop_Processor_Info::show() 
{
    std::cout << "------------------------LAPTOP PROCESSOR INFO-------------------------" << std::endl;

    std::cout << "Processor Brand               : " << P_Brand << std::endl;
    std::cout << "Processor Type                : " << P_Type << std::endl;
    std::cout << "Processor Speed               : " << P_Speed << " GHz" << std::endl;
    std::cout << "Processor Count               : " << P_Count << std::endl << std::endl;
}