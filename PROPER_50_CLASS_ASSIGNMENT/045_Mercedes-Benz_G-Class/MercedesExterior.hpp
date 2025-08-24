#ifndef MERCEDES_EXTERIOR_HPP
#define MERCEDES_EXTERIOR_HPP

#include <iostream>
#include <string>

class Mercedes_Exterior
{
    private:

         std::string Sunroof;
         char Roof;
         char Body;
         std::string Rub;
         std::string Body_Kit;
         char Chrome;
         std::string Antenna;

    public:

        Mercedes_Exterior(std::string, char 
                        , char, std::string 
                        , std::string, char 
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_EXTERIOR_HPP