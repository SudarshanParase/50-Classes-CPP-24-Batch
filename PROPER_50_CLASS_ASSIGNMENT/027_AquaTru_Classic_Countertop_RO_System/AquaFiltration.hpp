#ifndef AQUA_FILTRATION_HPP
#define AQUA_FILTRATION_HPP

#include <iostream>
#include <string>

class Aqua_Filtration
{
    private:

        std::string Filtration;
        std::string Contaminant;
        std::string TDS;
        std::string Production;

    public:

        Aqua_Filtration(std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AQUA_FILTRATION_HPP