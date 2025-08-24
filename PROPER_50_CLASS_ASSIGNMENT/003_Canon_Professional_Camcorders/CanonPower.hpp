#ifndef CANON_POWER_HPP
#define CANON_POWER_HPP

#include <iostream>
#include <string>

class Canon_Power
{
    private:

        std::string Battery_Type;

    public:

        Canon_Power(std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CANON_POWER_HPP