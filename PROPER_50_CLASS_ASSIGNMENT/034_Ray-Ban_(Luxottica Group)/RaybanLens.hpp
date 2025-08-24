#ifndef RAYBAN_LENS_HPP
#define RAYBAN_LENS_HPP

#include <iostream>
#include <string>

class Rayban_Lens
{
    private:

        std::string Lens_Type;
        std::string Lens_Material;
        std::string Color;
        std::string Polarization;
        std::string UV;
        std::string Width;
        std::string Height;
        std::string Visible;
        std::string Scratch;
        std::string Color_Accuracy;

    public:

        Rayban_Lens(std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // RAYBAN_LENS_HPP