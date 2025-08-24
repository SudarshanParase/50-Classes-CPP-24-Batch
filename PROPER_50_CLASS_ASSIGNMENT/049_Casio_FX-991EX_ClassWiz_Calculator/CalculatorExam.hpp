#ifndef CALCULATOR_EXAM_HPP
#define CALCULATOR_EXAM_HPP

#include <iostream>
#include <string>

class Calculator_Exam
{
    private:

        std::string Exam;
        std::string Usage;
        std::string Ease;

    public:

        Calculator_Exam(std::string, std::string 
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // CALCULATOR_EXAM_HPP