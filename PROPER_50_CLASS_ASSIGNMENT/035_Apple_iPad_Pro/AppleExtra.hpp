#ifndef APPLE_EXTRA_HPP
#define APPLE_EXTRA_HPP

#include <iostream>
#include <string>

class Apple_Extra
{
    private:

        char GPS;
        std::string Fingerprint_Sensor;
        char Face_Unlock;
        std::string Sensors;
        char Headphone_Jack;
        char Water;
        char Rating;
        char Dust;
        char Extra;

    public:

        Apple_Extra(char, std::string
                , char, std::string 
                , char, char 
                , char, char 
                , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_EXTRA_HPP