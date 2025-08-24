#ifndef AQUA_OVERVIEW_HPP
#define AQUA_OVERVIEW_HPP

#include <iostream>
#include <string>

class Aqua_Overview
{
    private:

        std::string Model;
        std::string Category;
        std::string Release;
        std::string Use;
        std::string Price;
        std::string Certifications;

    public:

        Aqua_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AQUA_OVERVIEW_HPP