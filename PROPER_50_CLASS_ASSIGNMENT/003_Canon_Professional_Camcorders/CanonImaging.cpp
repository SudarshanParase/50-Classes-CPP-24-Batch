#include "CanonImaging.hpp"

Canon_Imaging::Canon_Imaging(std::string _1, std::string _2
                            ,std::string _3, std::string _4)
                            {
                                Image_Sensor = _1;
                                Sensor_Resolution = _2;
                                Effective_Sensor_Resolution = _3;
                                White_Balance_Range = _4;
                            }

    void Canon_Imaging::show()
    {
        using std::cout;
        using std::endl;

        
        cout << "------------------------- I M A G I N G ---------------------------" << endl << endl;
            
        cout << "Image Sensor                               : " << Image_Sensor << endl;
        cout << "Sensor Resolution                          : " << Sensor_Resolution << endl;
        cout << "Effective Sensor Resolution                : " << Effective_Sensor_Resolution << endl;
        cout << "White Balance Range                        : " << White_Balance_Range << endl << endl;
        
    }