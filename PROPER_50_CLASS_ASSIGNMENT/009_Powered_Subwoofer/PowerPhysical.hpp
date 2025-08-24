#ifndef POWER_PHYSICAL_HPP
#define POWER_PHYSICAL_HPP

#include <iostream>
#include <string>

class Power_Physical
{
    private:

        std::string Color;
        char Handles;
        std::string Cooling;
        char Environmental;
        std::string Construction;
        std::string Dimensions;
        std::string Weight;

    public:

        Power_Physical(std::string, char 
                    , std::string, char 
                    , std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // POWER_PHYSICAL_HPP