#ifndef ROUTER_SOFTWARE_HPP
#define ROUTER_SOFTWARE_HPP

#include <iostream>
#include <string>

class Router_Software
{
    private:

        std::string Firmware;
        std::string Gaming;
        std::string QoS;
        std::string VPN;
        std::string Security;
        std::string Parental;
        std::string Mesh;
        std::string Mobile;
        std::string AiCloud;

    public:

        Router_Software(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ROUTER_SOFTWARE_HPP