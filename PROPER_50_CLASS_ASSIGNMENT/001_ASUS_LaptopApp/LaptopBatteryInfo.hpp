#ifndef LAPTOP_BATTERY_INFO_HPP
#define LAPTOP_BATTERY_INFO_HPP

#include <iostream>
#include <string>


class Laptop_Battery_Info {
private:
    short int Voltage;
    char Are_Batteries_Included;
    short int No_Of_Lithium_Ion_Cells;

public:
    Laptop_Battery_Info(short int, char, short int); // Only Declaration

    void show(); // Only Declaration
};

#endif // LAPTOP_BATTERY_INFO_HPP
