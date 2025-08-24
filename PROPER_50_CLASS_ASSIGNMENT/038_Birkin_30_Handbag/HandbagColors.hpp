#ifndef HANDBAG_COLORS_HPP
#define HANDBAG_COLORS_HPP

#include <iostream>
#include <string>

class Handbag_Colors
{
    private:

        std::string Popular;
        std::string Interior;
        std::string Stitching;
        std::string Custom;

    public:

        Handbag_Colors(std::string, std::string 
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDBAG_COLORS_HPP