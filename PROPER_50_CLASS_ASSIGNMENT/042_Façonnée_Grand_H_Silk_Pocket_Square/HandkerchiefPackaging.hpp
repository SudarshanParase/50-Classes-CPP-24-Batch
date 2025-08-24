#ifndef HANDKERCHIEF_PACKAGING_HPP
#define HANDKERCHIEF_PACKAGING_HPP

#include <iostream>
#include <string>

class Handkerchief_Packaging
{
    private:

        std::string Pocket;
        std::string Presentation;
        std::string Dust;

    public:

        Handkerchief_Packaging(std::string, std::string 
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDKERCHIEF_PACKAGING_HPP