#ifndef SAMSUNG_ENVIRONMENTAL_HPP
#define SAMSUNG_ENVIRONMENTAL_HPP

#include <iostream>
#include <string>

class Samsung_Environmental
{
    private:

        std::string Operating_Temperature;
        std::string Operating_Humidity;
        std::string Power_Consumption;
        std::string AC_Input_Power;
        std::string Power_Adapter_Type;

    public:

        Samsung_Environmental(std::string _1, std::string _2, std::string _3
                            , std::string _4, std::string _5);
                            

                            void show(); // Only Declaration
};
#endif