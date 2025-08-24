#ifndef ROUTER_OVERVIEW_HPP
#define ROUTER_OVERVIEW_HPP

#include <iostream>
#include <string>

class Router_Overview
{
    private:

        std::string Model;
        short int Release_Year;
        std::string Wifi;
        std::string Bands;
        std::string Max;
        std::string Target;

    public:

        Router_Overview(std::string, short int
                        , std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ROUTER_OVERVIEW_HPP