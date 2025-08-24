#ifndef HANDBAG_MATERIALS_HPP
#define HANDBAG_MATERIALS_HPP

#include <iostream>
#include <string>

class Handbag_Materials
{
    private:

        std::string Exterior;
        std::string Interior;
        std::string Finish;
        std::string Other;

    public:

        Handbag_Materials(std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDBAG_MATERIALS_HPP