#ifndef ROLEX_DIAL_HPP
#define ROLEX_DIAL_HPP

#include <iostream>
#include <string>

class Rolex_Dial
{
    private:

        std::string Dial;
        std::string Hands;
        std::string Date;
        std::string Bezel;

    public:

        Rolex_Dial(std::string, std::string
                , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ROLEX_DIAL_HPP