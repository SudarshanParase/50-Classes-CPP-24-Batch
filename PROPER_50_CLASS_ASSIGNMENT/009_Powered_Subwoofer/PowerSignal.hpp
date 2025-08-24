#ifndef POWER_SIGNAL_HPP
#define POWER_SIGNAL_HPP

#include <iostream>
#include <string>

class Power_Signal
{
    private:

        char EQ;
        char Parametric;
        char Semi;
        char Filters;
        std::string Dynamic_Processing;
        char Alignment;
        char Phase_Adjustment;
        std::string Digital;
        std::string Maximum;

    public:

        Power_Signal(char, char 
                    , char, char 
                    , std::string, char 
                    , char, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // POWER_SIGNAL_HPP