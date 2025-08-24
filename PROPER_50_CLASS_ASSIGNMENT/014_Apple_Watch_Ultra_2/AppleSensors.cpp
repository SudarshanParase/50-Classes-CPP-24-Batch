#include "AppleSensors.hpp"

Apple_Sensors::Apple_Sensors
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5, std::string _6
    , std::string _7, std::string _8
    , std::string _9)
    {
        Heart_Rate = _1;
        Blood_Oxygen = _2;
        ECG = _3;
        Body = _4;
        Compass = _5;
        Altimeter = _6;
        Gyroscope = _7;
        Depth_Gauge = _8;
        Emergency_Siren = _9;
    }

void Apple_Sensors::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- S E N S O R S   &   F E A T U R E S ---------------------" << endl << endl;
    
    cout << "Heart Rate Sensor              : " << Heart_Rate << endl;
    cout << "Blood Oxygen Sensor            : " << Blood_Oxygen << endl;
    cout << "ECG Sensor                     : " << ECG << endl;
    cout << "Body Temperature               : " << Body << endl;
    cout << "Compass                        : " << Compass << endl;
    cout << "Altimeter                      : " << Altimeter << endl;
    cout << "Gyroscope / Accelerometer      : " << Gyroscope << endl;
    cout << "Depth Gauge                    : " << Depth_Gauge << endl;
    cout << "Emergency Siren                : " << Emergency_Siren << endl << endl;
}