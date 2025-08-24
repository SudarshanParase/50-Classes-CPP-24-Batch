#ifndef DEFENDER_DIMENSIONS_HPP
#define DEFENDER_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Defender_Dimensions
{
    private:

        std::string Length;
        short int Wheelbase;

    public:

        Defender_Dimensions(std::string, short int); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_DIMENSIONS_HPP