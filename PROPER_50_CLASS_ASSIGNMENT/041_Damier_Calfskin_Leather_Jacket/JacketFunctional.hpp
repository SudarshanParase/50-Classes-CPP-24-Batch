#ifndef JACKET_FUNCTIONAL_HPP
#define JACKET_FUNCTIONAL_HPP

#include <iostream>
#include <string>

class Jacket_Functional
{
    private:

        std::string Insulation;
        std::string Weather;
        std::string Comfort;
        std::string Ventilation;
        std::string Temperature;

    public:

        Jacket_Functional(std::string, std::string 
                        , std::string, std::string 
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // JACKET_FUNCTIONAL_HPP