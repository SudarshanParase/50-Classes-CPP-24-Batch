#ifndef HIKVISION_SMART_HPP
#define HIKVISION_SMART_HPP

#include <iostream>
#include <string>

class Hikvision_Smart
{
    private:

        std::string AI_Detection;
        std::string Smart;
        std::string Privacy;
        std::string Edge;

    public:

        Hikvision_Smart(std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HIKVISION_SMART_HPP