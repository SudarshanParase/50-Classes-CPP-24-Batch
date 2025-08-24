#ifndef CONTINENTAL_SUSPENSIONS_HPP
#define CONTINENTAL_SUSPENSIONS_HPP

#include <iostream>
#include <string>

class Continental_Suspensions
{
    private:
    
        std::string Front_Suspension;
        std::string Rear_Suspension;
        std::string Front_Adjuster;
        std::string Rear_Adjuster;
        std::string Chassis_Type;

    public:

        Continental_Suspensions(std::string, std::string
                            , std::string, std::string 
                            , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // CONTINENTAL_SUSPENSIONS_HPP