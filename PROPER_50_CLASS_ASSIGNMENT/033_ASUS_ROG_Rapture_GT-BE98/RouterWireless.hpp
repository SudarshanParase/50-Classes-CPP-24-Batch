#ifndef ROUTER_WIRELESS_HPP
#define ROUTER_WIRELESS_HPP

#include <iostream>
#include <string>

class Router_Wireless
{
    private:

        std::string Frequency;
        std::string Wifi;
        std::string Channel;
        std::string Modulation;
        std::string MIMO;
        std::string OFDMA;
        std::string Multi;
        std::string Beamforming;
        std::string Range;

    public:

        Router_Wireless(std::string, std::string
                        , std::string, std::string
                        , std::string, std::string
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ROUTER_WIRELESS_HPP