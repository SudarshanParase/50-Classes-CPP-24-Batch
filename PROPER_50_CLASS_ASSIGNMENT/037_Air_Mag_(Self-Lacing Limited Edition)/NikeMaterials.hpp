#ifndef NIKE_MATERIALS_HPP
#define NIKE_MATERIALS_HPP

#include <iostream>
#include <string>

class Nike_Materials
{
    private:

        std::string Upper;
        std::string Midsole;
        std::string Outsole;
        std::string Lining;
        std::string Heel;
        std::string Toe;

    public:

        Nike_Materials(std::string, std::string
                    , std::string, std::string 
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // NIKE_MATERIALS_HPP