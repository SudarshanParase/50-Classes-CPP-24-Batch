#ifndef ANKER_PERFORMANCE_HPP
#define ANKER_PERFORMANCE_HPP

#include <iostream>
#include <string>

class Anker_Performance
{
    private:

        std::string Single;
        std::string Multi;
        std::string Charging;
        std::string Silent;

    public:

        Anker_Performance(std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ANKER_PERFORMANCE_HPP