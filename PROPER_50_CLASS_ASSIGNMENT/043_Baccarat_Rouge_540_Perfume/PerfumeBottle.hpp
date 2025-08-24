#ifndef PERFUME_BOTTLE_HPP
#define PERFUME_BOTTLE_HPP


#include <iostream>
#include <string>

class Perfume_Bottle
{
    private:

        std::string Bottle;
        std::string Volume;
        std::string Packaging;

    public:

        Perfume_Bottle(std::string , std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // PERFUME_BOTTLE_HPP