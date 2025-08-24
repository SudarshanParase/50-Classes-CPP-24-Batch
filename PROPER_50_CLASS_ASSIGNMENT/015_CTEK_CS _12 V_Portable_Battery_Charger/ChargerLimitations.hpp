#ifndef CHARGER_LIMITATIONS_HPP
#define CHARGER_LIMITATIONS_HPP

#include <iostream>
#include <string>

class Charger_Limitations
{
    private:

        std::string Traditional;
        std::string Limited;
        std::string Accessory;
        std::string Weight;

    public:

        Charger_Limitations(std::string _1, std::string _2
                            , std::string _3, std::string _4); // Only Declaration

        void show(); // Only Declaration
};

#endif // CHARGER_LIMITATIONS_HPP