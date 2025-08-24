#ifndef MERCEDES_DIMENSIONS_HPP
#define MERCEDES_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Mercedes_Dimensions
{
    private:

        std::string Length;
        std::string Ground_Clearance;
        short int Wheelbase;

    public:

        Mercedes_Dimensions(std::string, std::string 
                            , short int); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_DIMENSIONS_HPP