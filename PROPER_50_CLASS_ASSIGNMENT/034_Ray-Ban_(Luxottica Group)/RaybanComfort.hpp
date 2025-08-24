#ifndef RAYBAN_COMFORT_HPP
#define RAYBAN_COMFORT_HPP

#include <iostream>
#include <string>

class Rayban_Comfort
{
    private:

        std::string Fit;
        std::string Temple;
        std::string Bridge;
        std::string Flex;
        std::string Weight;

    public:

        Rayban_Comfort(std::string, std::string 
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // RAYBAN_COMFORT_HPP