#ifndef HIKVISION_BUILD_HPP
#define HIKVISION_BUILD_HPP

#include <iostream>
#include <string>

class Hikvision_Build
{
    private:

        std::string Housing;
        std::string Operating;
        std::string Power;

    public:

        Hikvision_Build(std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HIKVISION_BUILD_HPP