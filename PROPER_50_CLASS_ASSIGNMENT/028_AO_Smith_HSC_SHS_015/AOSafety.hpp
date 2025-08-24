#ifndef AO_SAFETY_HPP
#define AO_SAFETY_HPP

#include <iostream>
#include <string>

class AO_Safety
{
    private:

        std::string Multi;
        std::string Automatic;
        std::string Dry;
        std::string Child;
        std::string Shock;

    public:

        AO_Safety(std::string, std::string 
                , std::string, std::string
                , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AO_SAFETY_HPP