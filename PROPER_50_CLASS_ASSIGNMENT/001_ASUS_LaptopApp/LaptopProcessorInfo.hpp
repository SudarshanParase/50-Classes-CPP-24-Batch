#ifndef LAPTOP_PROCESSOR_INFO_HPP
#define LAPTOP_PROCESSOR_INFO_HPP

#include <iostream>
#include <string>


class Laptop_Processor_Info {
private:
    std::string P_Brand, P_Type;
    float P_Speed;
    short int P_Count;

public:
    Laptop_Processor_Info(std::string, std::string, float, short int); // Only Declaration

    void show(); // Only Declaration
};

#endif // LAPTOP_PROCESSOR_INFO_HPP