#ifndef KETTLE_TEMPERATURE_HPP
#define KETTLE_TEMPERATURE_HPP

#include <iostream>
#include <string>

class Kettle_Temperature
{
    private:

        std::string Precision;
        std::string Heat;
        std::string User;

    public:

        Kettle_Temperature(std::string, std::string 
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // KETTLE_TEMPERATURE_HPP