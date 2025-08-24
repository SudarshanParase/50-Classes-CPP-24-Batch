#ifndef JACKET_MATERIAL_HPP
#define JACKET_MATERIAL_HPP

#include <iostream>
#include <string>

class Jacket_Material
{
    private:

        std::string Main;
        std::string Lining;
        std::string Hardware;
        std::string Stitching;
        std::string Finish;

    public:

        Jacket_Material(std::string, std::string 
                    , std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // JACKET_MATERIAL_HPP