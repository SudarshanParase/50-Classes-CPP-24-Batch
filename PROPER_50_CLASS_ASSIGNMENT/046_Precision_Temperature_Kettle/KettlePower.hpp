#ifndef KETTLE_POWER_HPP
#define KETTLE_POWER_HPP

#include <iostream>
#include <string>

class Kettle_Power
{
    private:

        std::string Power;
        std::string Boiling;
        std::string Temperature;
        std::string Keep;

    public:

        Kettle_Power(std::string, std::string 
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // KETTLE_POWER_HPP