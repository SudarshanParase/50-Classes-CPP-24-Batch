#ifndef ANKER_OVERVIEW_HPP
#define ANKER_OVERVIEW_HPP

#include <iostream>
#include <string>

class Anker_Overview
{
    private:

        std::string Model;
        std::string Type;
        std::string Launch;
        std::string Price;
        std::string Tech;

    public:

        Anker_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
        
};

#endif // ANKER_OVERVIEW_HPP