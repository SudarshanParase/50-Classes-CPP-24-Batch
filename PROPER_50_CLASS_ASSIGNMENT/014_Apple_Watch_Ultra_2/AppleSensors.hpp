#ifndef APPLE_SENSORS_HPP
#define APPLE_SENSORS_HPP

#include <iostream>
#include <string>

class Apple_Sensors
{
    private:

        std::string Heart_Rate;
        std::string Blood_Oxygen;
        std::string ECG;
        std::string Body;
        std::string Compass;
        std::string Altimeter;
        std::string Gyroscope;
        std::string Depth_Gauge;
        std::string Emergency_Siren;

    public:

        Apple_Sensors(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_SENSORS_HPP