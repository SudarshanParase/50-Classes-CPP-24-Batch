#ifndef SHOEI_COMFORT_HPP
#define SHOEI_COMFORT_HPP

#include <iostream>
#include <string>

class Shoei_Comfort
{
    private:

        std::string Interior;
        std::string Helmet;
        std::string Controls;
        std::string Extras;

    public:

        Shoei_Comfort(std::string _1, std::string _2
                    , std::string _3, std::string _4); // Only Declaration

        void show(); // Only Declaration
};
#endif // SHOEI_COMFORT_HPP