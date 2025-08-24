#ifndef ROUTER_PORTS_HPP
#define ROUTER_PORTS_HPP

#include <iostream>
#include <string>

class Router_Ports
{
    private:

        std::string WAN;
        std::string SFP;
        std::string LAN;
        std::string G1_LAN;
        std::string USB;
        std::string WAN_Aggregation;
        std::string Link;

    public:

        Router_Ports(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ROUTER_PORTS_HPP