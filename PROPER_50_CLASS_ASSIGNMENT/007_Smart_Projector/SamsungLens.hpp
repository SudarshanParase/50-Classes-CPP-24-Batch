#ifndef SAMSUNG_LENS_HPP
#define SAMSUNG_LENS_HPP

#include <iostream>
#include <string>

class Samsung_Lens
{
    private:

        char Includes_Lens;
        std::string Projection_Size;

    public:

        Samsung_Lens(char, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_LENS_HPP