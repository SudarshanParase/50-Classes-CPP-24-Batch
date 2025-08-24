#ifndef ERGOTRON_GENERAL_HPP
#define ERGOTRON_GENERAL_HPP

#include <iostream>
#include <string>

class Ergotron_General
{
    private:

        std::string Screen_Size;
        char No_of_Displays_Supported;
        std::string Load_Capacity;
        std::string Mounting_Hole;
        std::string Orientation;
        std::string Grommet_Size;
        std::string Clamp_Compatibility;
        std::string Min_Depth_Requirement;

    public:

        Ergotron_General(std::string, char
                        , std::string, std::string
                        , std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration


};

#endif // ERGOTRON_GENERAL_HPP