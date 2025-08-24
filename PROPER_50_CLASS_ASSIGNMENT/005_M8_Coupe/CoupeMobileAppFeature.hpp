#ifndef COUPE_MOBILE_APP_FEATURE_HPP
#define COUPE_MOBILE_APP_FEATURE_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Mobile_App
{
    private:

        // Data Member
        char Emergency_Call;
        char Find_My_Car;
        char Check_V_Status;
        char Remote_Car_Lock;
        char Remote_AC;
        char Car_Light;
        char OTA;
        char Geo_fence;

    public:

        // Constructor
        Coupe_Mobile_App(char, char, char
                        , char, char, char
                        , char, char); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_MOBILE_APP_FEATURE_HPP 