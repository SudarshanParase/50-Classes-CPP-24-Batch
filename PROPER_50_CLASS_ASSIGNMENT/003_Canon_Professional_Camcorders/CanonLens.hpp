#ifndef CANON_LENS_HPP
#define CANON_LENS_HPP

#include <iostream>
#include <string>

class Canon_Lens
{
    private:

        std::string Focal_Length;
        std::string Equivalent_Focal_length;
        short int Optical_Zoom;
        std::string Max_Digital_Zoom;
        std::string Max_Aperture;
        short int Filter_Size;
        std::string Control_Rings;
        std::string Image_Stabilization;
        std::string Focus_Control;

    public:

        Canon_Lens(std::string, std::string, short int
                  ,std::string, std::string, short int
                  ,std::string, std::string, std::string); // Only Declaration

            
        void show(); // Only Declaration
};

#endif // CANON_LENS_HPP 