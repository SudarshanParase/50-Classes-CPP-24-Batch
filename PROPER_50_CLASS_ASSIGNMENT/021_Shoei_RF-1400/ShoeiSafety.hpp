#ifndef SHOEI_SAFETY_HPP
#define SHOEI_SAFETY_HPP

#include <iostream>
#include <string>

class Shoei_Safety
{
    private:

        std::string Shell;
        std::string Impact;
        std::string Safety;
        std::string Noise;

    public:

        Shoei_Safety(std::string _1, std::string _2
                    , std::string _3, std::string _4); // Only Declaration

        void show(); // Only Declaration
};

#endif // SHOEI_SAFETY_HPP