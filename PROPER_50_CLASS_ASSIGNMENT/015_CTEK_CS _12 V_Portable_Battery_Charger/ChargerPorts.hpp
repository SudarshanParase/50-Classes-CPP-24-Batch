#ifndef CHARGER_PORTS_HPP
#define CHARGER_PORTS_HPP

#include <iostream>
#include <string>

class Charger_Ports
{
    private:

        std::string Main;
        std::string USB_C;
        std::string USB_A;

    public:

        Charger_Ports(std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CHARGER_PORTS_HPP