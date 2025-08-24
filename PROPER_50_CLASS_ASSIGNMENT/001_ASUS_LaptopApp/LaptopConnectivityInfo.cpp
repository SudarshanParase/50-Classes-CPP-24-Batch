#include "LaptopConnectivityInfo.hpp"
#include <iostream>

Laptop_Connectivity_Info::Laptop_Connectivity_Info(std::string t, float w, short int u, short int h, std::string a)
    : C_Type(t), Wireless_Type(w), No_of_USB_Ports(u), No_of_HDMI_Ports(h), Audio_Details(a) {}

void Laptop_Connectivity_Info::show() 
{
    std::cout << "------------------------LAPTOP CONNECTIVITY INFO-------------------------" << std::endl;

    std::cout << "Connectivity Type             : " << C_Type << std::endl;
    std::cout << "Wireless Type                 : " << Wireless_Type << " ax" << std::endl;
    std::cout << "Number of USB 3.0 Ports       : " << No_of_USB_Ports << std::endl;
    std::cout << "Number of HDMI Ports          : " << No_of_HDMI_Ports << std::endl;
    std::cout << "Audio Details                 : " << Audio_Details << std::endl << std::endl;
}
