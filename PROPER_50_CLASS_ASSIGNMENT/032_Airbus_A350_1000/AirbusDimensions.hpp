#ifndef AIRBUS_DIMENSIONS_HPP
#define AIRBUS_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Airbus_Dimensions
{
    private:
    
        std::string Overall;
        std::string Wingspan;
        std::string Height;
        std::string Fuselage;
        std::string Cabin;
        std::string Cargo;

    public:

        Airbus_Dimensions(std::string, std::string
                        , std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AIRBUS_DIMENSIONS_HPP