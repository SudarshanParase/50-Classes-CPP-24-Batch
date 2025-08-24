#ifndef KTM_SUSPENSIONS_HPP
#define KTM_SUSPENSIONS_HPP

#include <iostream>
#include <string>

class Ktm_Suspensions
{
    private:

        std::string Front_Suspension;
        std::string Rear_Suspension;
        char Front_Adjuster;
        char Rear_Adjuster;
        std::string Chassis_Type;

    public:

        Ktm_Suspensions(std::string, std::string 
                    , char, char 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};


#endif // KTM_SUSPENSIONS_HPP