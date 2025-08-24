#ifndef AIRBUS_CABIN_HPP
#define AIRBUS_CABIN_HPP

#include <iostream>
#include <string>

class Airbus_Cabin
{
    private:

        std::string Airspace;
        std::string Passenger;
        std::string IFE;
        std::string First_Class;
        std::string Business_Class;
        std::string Premium_Economy;
        std::string Economy;

    public:

        Airbus_Cabin(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // AIRBUS_CABIN_HPP
