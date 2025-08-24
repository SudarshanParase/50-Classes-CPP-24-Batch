#ifndef BELT_COLORS_HPP
#define BELT_COLORS_HPP

#include <iostream>
#include <string>

class Belt_Colors
{
    private:

        std::string Leather_1;
        std::string Leather_2;
        std::string Buckle;
        std::string Custom;

    public:

        Belt_Colors(std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // BELT_COLORS_HPP