#ifndef ERGOTRON_PHYSICAL_HPP
#define ERGOTRON_PHYSICAL_HPP

#include <iostream>
#include <string>

class E_Physical
{
    private:

        std::string Material_of_Construction;
        std::string Certifications;
        std::string Pole_Diameter;
        std::string Pole_Height;
        std::string Weight;

    public:

        E_Physical(std::string, std::string
                , std::string, std::string 
                , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ERGOTRON_PHYSICAL_HPP