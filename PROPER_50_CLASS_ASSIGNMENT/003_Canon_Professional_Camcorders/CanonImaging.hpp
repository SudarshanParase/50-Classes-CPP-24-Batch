#ifndef CANON_IMAGING_HPP
#define CANON_IMAGING_HPP

#include <iostream>
#include <string>

class Canon_Imaging
{
    private:

        std::string Image_Sensor;
        std::string Sensor_Resolution;
        std::string Effective_Sensor_Resolution;
        std::string White_Balance_Range;

    public:

        Canon_Imaging(std::string, std::string   
                    , std::string, std::string ); // Only Delcaration


            void show(); // Only Declaration
                
};

#endif // CANON_IMAGING_HPP