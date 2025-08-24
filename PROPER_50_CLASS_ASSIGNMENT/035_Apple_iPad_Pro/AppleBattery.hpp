#ifndef APPLE_BATTERY_HPP
#define APPLE_BATTERY_HPP

#include <iostream>
#include <string>

class Apple_Battery
{
    private:

        std::string Type;
        std::string Size;
        char Fast;
        std::string Talk;

    public:

        Apple_Battery(std::string, std::string 
                    , char , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_BATTERY_HPP