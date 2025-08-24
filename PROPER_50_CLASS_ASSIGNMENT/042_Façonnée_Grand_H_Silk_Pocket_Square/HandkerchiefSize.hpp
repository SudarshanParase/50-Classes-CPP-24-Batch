#ifndef HANDKERCHIEF_SIZE_HPP
#define HANDKERCHIEF_SIZE_HPP

#include <iostream>
#include <string>

class Handkerchief_Size
{
    private:

        std::string Size;
        std::string Weight;
        std::string Pocket;

    public:

        Handkerchief_Size(std::string, std::string 
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDKERCHIEF_SIZE_HPP