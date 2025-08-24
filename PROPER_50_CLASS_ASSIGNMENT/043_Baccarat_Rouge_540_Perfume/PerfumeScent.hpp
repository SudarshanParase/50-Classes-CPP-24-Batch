#ifndef PERFUME_SCENT_HPP
#define PERFUME_SCENT_HPP

#include <iostream>
#include <string>

class Perfume_Scent
{
    private:

        std::string Top;
        std::string Heart;
        std::string Base;
        std::string Signature;
        std::string Scent;

    public:

        Perfume_Scent(std::string, std::string 
                    , std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // PERFUME_SCENT_HPP