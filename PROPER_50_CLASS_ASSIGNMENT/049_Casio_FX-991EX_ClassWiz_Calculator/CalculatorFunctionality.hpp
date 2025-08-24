#ifndef CALCULATOR_FUNCTIONALITY_HPP
#define CALCULATOR_FUNCTIONALITY_HPP

#include <iostream>
#include <string>

class Calculator_Functionality
{
    private:

        std::string Total;
        std::string Matrix;
        std::string Spreadsheet;
        std::string Equation;
        std::string Statistical;

    public:

        Calculator_Functionality(std::string, std::string 
                                , std::string, std::string 
                                , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // CALCULATOR_FUNCTIONALITY_HPP