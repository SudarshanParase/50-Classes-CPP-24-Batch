#ifndef ARRMA_BATTERY_COMPATIBILITY_HPP
#define ARRMA_BATTERY_COMPATIBILITY_HPP

#include <iostream>
#include <string>

class Arrma_Battery
{
    private:

        std::string S2;
        std::string S3;
        std::string S4;
        std::string S6;
        std::string Battery_Tray_Size;

    public:

        Arrma_Battery(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ARRMA_BATTERY_COMPATIBILITY_HPP