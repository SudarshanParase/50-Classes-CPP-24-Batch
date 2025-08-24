#ifndef JACKET_DESIGN_HPP
#define JACKET_DESIGN_HPP

#include <iostream>
#include <string>

class Jacket_Design
{
    private:

        std::string Exterior;
        std::string Shoulder;
        std::string Pockets;
        std::string Sleeve;
        std::string Back;
        std::string Signature;

    public:

        Jacket_Design(std::string, std::string 
                    , std::string, std::string 
                    , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // JACKET_DESIGN_HPP