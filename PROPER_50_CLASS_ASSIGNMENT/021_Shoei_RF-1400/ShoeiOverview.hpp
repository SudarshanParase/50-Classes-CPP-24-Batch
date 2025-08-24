#ifndef SHOEI_OVERVIEW_HPP
#define SHOEI_OVERVIEW_HPP

#include <iostream>
#include <string>

class Shoei_Overview
{
    private:

        std::string Model;
        std::string Position;
        std::string Materials;
        std::string Price;
        std::string Certifications;
        std::string Primary;

    public:

        Shoei_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration
        
        void show(); // Only Declaration
};

#endif // SHOEI_OVERVIEW_HPP