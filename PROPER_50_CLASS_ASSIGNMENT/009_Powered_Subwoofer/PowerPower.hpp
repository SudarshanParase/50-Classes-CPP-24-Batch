#ifndef POWER_POWER_HPP
#define POWER_POWER_HPP

#include <iostream>
#include <string>

class Power_Power
{
    private:

        std::string AC_Input;
        std::string AC_Power;
        std::string Current;

    public:

        Power_Power(std::string, std::string 
                , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // POWER_POWER_HPP