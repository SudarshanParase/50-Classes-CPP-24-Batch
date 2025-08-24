#ifndef HANDBAG_DIMENSIONS_HPP
#define HANDBAG_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Handbag_Dimensions
{
    private:

        std::string Model;
        std::string Length;
        std::string Height;
        std::string Depth;
        std::string Handle_Drop;
        std::string Weight;

    public:

        Handbag_Dimensions(std::string, std::string
                        , std::string, std::string 
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDBAG_DIMENSIONS_HPP