#ifndef SHOEI_VISOR_HPP
#define SHOEI_VISOR_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Shoei_Visor
{
    private:

        std::string Shield;
        std::string Anti;
        std::string Field;

    public:

        Shoei_Visor(std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SHOEI_VISOR_HPP