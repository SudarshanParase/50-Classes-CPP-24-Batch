#ifndef AO_PERFORMANCE_HPP
#define AO_PERFORMANCE_HPP

#include <iostream>
#include <string>

class AO_Performance
{
    private:

        std::string Power;
        std::string Heating;
        std::string Dimensions;
        std::string Temperature;
        std::string Installation;

    public:

        AO_Performance(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AO_PERFORMANCE_HPP