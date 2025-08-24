#ifndef KETTLE_BUILD_HPP
#define KETTLE_BUILD_HPP

#include <iostream>
#include <string>

class Kettle_Build
{
    private:

        std::string Body;
        std::string Heating;
        std::string Cool;
        std::string Water;
        std::string Base;

    public:

        Kettle_Build(std::string, std::string 
                    , std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declartion
};

#endif // KETTLE_BUILD_HPP