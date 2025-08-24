#ifndef ERGOTRON_ADJUSTMENTS_HPP
#define ERGOTRON_ADJUSTMENTS_HPP

#include <iostream>
#include <string>

class E_Adjustments
{
    private:

        std::string Rotation_A;
        std::string Tilt_A;
        std::string Swivel_A;
        std::string Height_A;
        std::string Max_Arm;

    public:

        E_Adjustments(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        
        void show(); // Only Declaration
};

#endif // ERGOTRON_ADJUSTMENTS_HPP