#ifndef AIRBUS_HIGHLIGHTS_HPP
#define AIRBUS_HIGHLIGHTS_HPP

#include <iostream>
#include <string>

class Airbus_Highlights
{
    private:

        std::string Longest;
        std::string Capacity;
        std::string Comfort;
        std::string Sales;

    public:

        Airbus_Highlights(std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};


#endif // AIRBUS_HIGHLIGHTS_HPP