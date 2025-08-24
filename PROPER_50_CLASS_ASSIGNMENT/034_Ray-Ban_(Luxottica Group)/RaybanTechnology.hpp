#ifndef RAYBAN_TECHNOLOGY_HPP
#define RAYBAN_TECHNOLOGY_HPP

#include <iostream>
#include <string>

class Rayban_Technology
{
    private:

        std::string Polarization;
        std::string Anti;
        std::string Hydrophobic;
        std::string Impact;
        std::string Hand;

    public:

        Rayban_Technology(std::string, std::string
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // RAYBAN_TECHNOLOGY_HPP