#ifndef ARRMA_DIMENSIONS_HPP
#define ARRMA_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Arrma_Dimensions
{
    private:

        short int Length;
        short int Width;
        short int Height;
        short int Wheelbase;
        short int Ground;
        std::string Weight;
    public:

        Arrma_Dimensions(short int, short int
                        , short int, short int
                        , short int, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ARRMA_DIMENSIONS_HPP