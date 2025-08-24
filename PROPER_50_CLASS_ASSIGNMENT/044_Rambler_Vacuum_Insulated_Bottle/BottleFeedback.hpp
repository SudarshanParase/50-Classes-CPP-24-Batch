#ifndef BOTTLE_FEEDBACK_HPP
#define BOTTLE_FEEDBACK_HPP

#include <iostream>
#include <string>

class Bottle_Feedback
{
    private:

        std::string User;
        std::string Comparison;
        std::string Routine;

    public:

        Bottle_Feedback(std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};
#endif // BOTTLE_FEEDBACK_HPP