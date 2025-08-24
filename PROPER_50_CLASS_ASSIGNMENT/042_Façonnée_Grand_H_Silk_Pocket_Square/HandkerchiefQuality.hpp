#ifndef HANDKERCHIEF_QUALITY_HPP
#define HANDKERCHIEF_QUALITY_HPP

#include <iostream>
#include <string>

class Handkerchief_Quality 
{
    private:

        std::string Fabric;
        std::string Stitching;
        std::string Care;
        std::string Longevity;

    public:

        Handkerchief_Quality(std::string, std::string 
                            , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};
#endif // HANDKERCHIEF_QUALITY_HPP