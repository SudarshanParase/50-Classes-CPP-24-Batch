#ifndef HANDKERCHIEF_MATERIAL_HPP
#define HANDKERCHIEF_MATERIAL_HPP

#include <iostream>
#include <string>

class Handkerchief_Material
{
    private:

        std::string Fabric;
        std::string Edges;
        std::string Weave;
        std::string Finish;

    public:

        Handkerchief_Material(std::string, std::string 
                            , std::string, std::string );  // Only Declaration

        void show(); // Only Declaration

        
};

#endif // HANDKERCHIEF_MATERIAL_HPP