#ifndef ROUTER_HARDWARE_HPP
#define ROUTER_HARDWARE_HPP

#include <iostream>
#include <string>

class Router_Hardware
{
    private:

        std::string Processor;
        std::string RAM;
        std::string Flash;
        std::string Cooling;

    public:

        Router_Hardware(std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ROUTER_HARDWARE_HPP