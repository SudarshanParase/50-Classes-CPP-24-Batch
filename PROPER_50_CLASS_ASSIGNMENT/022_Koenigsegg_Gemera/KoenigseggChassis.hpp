#ifndef KOENIGSEGG_CHASSIS_HPP
#define KOENIGSEGG_CHASSIS_HPP

#include <iostream>
#include <string>

class Koenigsegg_Chassis
{
    private:

        std::string Chassis;
        std::string Body;
        std::string Weight;
        std::string Dimensions;
        std::string Storage;
        
    public:

        Koenigsegg_Chassis(std::string, std::string
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};
#endif // KOENIGSEGG_CHASSIS_HPP