#ifndef KOENIGSEGG_TECHNOLOGY_HPP
#define KOENIGSEGG_TECHNOLOGY_HPP

#include <iostream>
#include <string>

class Koenigsegg_Technology
{
    private:

        std::string Driver;
        std::string Navigation;
        std::string Airbags;
        std::string Unique;

    public:

        Koenigsegg_Technology(std::string, std::string
                            , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // KOENIGSEGG_TECHNOLOGY_HPP