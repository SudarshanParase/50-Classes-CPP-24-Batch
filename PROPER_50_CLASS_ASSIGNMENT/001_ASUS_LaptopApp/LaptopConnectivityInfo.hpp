#ifndef LAPTOP_CONNECTIVITY_INFO_HPP
#define LAPTOP_CONNECTIVITY_INFO_HPP

#include <iostream>
#include <string>


class Laptop_Connectivity_Info {
private:
    std::string C_Type;
    float Wireless_Type;
    short int No_of_USB_Ports;
    short int No_of_HDMI_Ports;
    std::string Audio_Details;

public:
    Laptop_Connectivity_Info(std::string, float, short int, short int, std::string); // Only Declaration

    void show(); // Only Declaration
};

#endif // LAPTOP_CONNECTIVITY_INFO_HPP
