#ifndef AMAZON_CONNECTIVITY_HPP
#define AMZON_CONNECTIVTIY_HPP

#include <iostream>
#include <string>

class Amazon_Connectivity
{
    private:

        std::string Wifi;
        std::string Bluetooth;
        std::string Smart;
        std::string Other_ports;

    public:

        Amazon_Connectivity(std::string, std::string
                            , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AMAZON_CONNECTIVITY_HPP