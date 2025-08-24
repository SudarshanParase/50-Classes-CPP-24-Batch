#ifndef IMALENT_BATTERY_HPP
#define IMALENT_BATTERY_HPP

#include <iostream>
#include <string>

class Imalent_Battery
{
    private:

        std::string Pack;
        std::string Capacity;
        std::string Runtime;
        std::string Recharge;
        std::string Charger;
        std::string Power;

    public:

        Imalent_Battery(std::string, std::string 
                    , std::string, std::string 
                    , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // IMALENT_BATTERY_HPP