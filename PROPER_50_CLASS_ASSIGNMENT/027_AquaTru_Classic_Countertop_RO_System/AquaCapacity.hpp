#ifndef AQUA_CAPACITY_HPP
#define AQUA_CAPACITY_HPP

#include <iostream>
#include <string>

class Aqua_Capacity
{
    private:

        std::string Holding;
        std::string Footprint;
        std::string Installation;
        std::string Maintenance;

    public:

        Aqua_Capacity(std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AQUA_CAPACITY_HPP