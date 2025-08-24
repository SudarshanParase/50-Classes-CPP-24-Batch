#ifndef CALCULATOR_PERFORMANCE_HPP
#define CALCULATOR_PERFORMANCE_HPP

#include <iostream>
#include <string>

class Calculator_Performance
{
    private:

        std::string Processor;
        std::string Power;
        std::string Build;
        std::string Warranty;

    public:

        Calculator_Performance(std::string, std::string 
                            , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // CALCULATOR_PERFORMANCE_HPP