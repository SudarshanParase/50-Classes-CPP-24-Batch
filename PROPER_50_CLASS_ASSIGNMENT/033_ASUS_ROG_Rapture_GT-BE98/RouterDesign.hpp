#ifndef ROUTER_DESIGN_HPP
#define ROUTER_DESIGN_HPP

#include <iostream>
#include <string>

class Router_Design
{
    private:

        std::string Design;
        std::string Ventilation;
        std::string Cooling;
        std::string Size;
        std::string Weight;

    public:

        Router_Design(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ROUTER_DESIGN_HPP