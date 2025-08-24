#ifndef PATEK_DIAL_HPP
#define PATEK_DIAL_HPP

#include <iostream>
#include <string>

class Patek_Dial
{
    private:

        std::string Total;
        std::string Brilliant;
        std::string Baguette;
        std::string Dial;

    public:
        
        Patek_Dial(std::string, std::string
                , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // PATEK_DIAL_HPP