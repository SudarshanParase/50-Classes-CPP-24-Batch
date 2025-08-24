#ifndef ATHER_MONITORING_HPP
#define ATHER_MONITORING_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Ather_Mobile_App_M
{
    private:

        char Battery_Status;
        char Live_Charging;
        char Nearby_Charging;
        char Vehicle_Location;
        char Tow_Theft;
        char Geo_Fencing;

    public:

        Ather_Mobile_App_M(char, char
                        , char, char
                        , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // ATHER_MONITORING_HPP