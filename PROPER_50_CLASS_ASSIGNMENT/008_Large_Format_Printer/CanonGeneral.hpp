#ifndef CANON_GENERAL_HPP
#define CANON_GENERAL_HPP

#include <iostream>
#include <string>

class Canon_General
{
    private:

        std::string Power_Source;
        char Battery;
        std::string Input_Power;
        std::string Power_Consumption;
        std::string Operating_Conditions;
        std::string Certifications;
        std::string Dimensions;
        std::string Weight;

    public:

        Canon_General(std::string, char
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CANON_GENERAL_HPP