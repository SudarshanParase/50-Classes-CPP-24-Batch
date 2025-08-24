#ifndef SAMSUNG_CONNECTIVITY_HPP
#define SAMSUNG_CONNECTIVITY_HPP

#include <iostream>
#include <string>

class Samsung_Connectivity
{
private:
    std::string Inputs;
    std::string Outputs;
    std::string HDCP_Supports;
    std::string USB_IO;
    std::string Multi_Input_Support;

public:
    Samsung_Connectivity(std::string _1, std::string _2, std::string _3, std::string _4, std::string _5);

    void show(); // Only Declaration
};

#endif // SAMSUNG_CONNECTIVITY_HPP