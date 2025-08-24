#ifndef HANDKERCHIEF_DESIGN_HPP
#define HANDKERCHIEF_DESIGN_HPP

#include <iostream>
#include <string>

class Handkerchief_Design
{
    private:

        std::string Primary;
        std::string Colorways;
        std::string Versatility;

    public:

        Handkerchief_Design(std::string, std::string 
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDKERCHIEF_DESIGN_HPP