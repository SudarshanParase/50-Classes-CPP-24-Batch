#ifndef NIKE_SMART_HPP
#define NIKE_SMART_HPP

#include <iostream>
#include <string>

class Nike_Smart
{
    private:

        std::string Self;
        std::string Sensors;
        std::string Manual;
        std::string Battery;
        std::string Charging;
        std::string LED;
        std::string App;

    public:

        Nike_Smart(std::string, std::string
                , std::string, std::string
                , std::string, std::string 
                , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // NIKE_SMART_HPP