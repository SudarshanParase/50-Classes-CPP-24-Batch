#ifndef MERCEDES_MOBILE_HPP
#define MERCEDES_MOBILE_HPP

#include <iostream>
#include <string>

class Mercedes_Mobile
{
    private:

        char Emergency;
        char Find_My_Car;
        char Check_Vehicle;
        char Remote_Car;
        char Remote_Parking;
        char Remote_AC;
        char Remote_Sunroof;
        char Car_Light;
        char Over_The_Air;
        char Geo_Fence;
        char Alexa_Compatibility;

    public:

        Mercedes_Mobile(char, char 
                    , char, char 
                    , char, char 
                    , char, char 
                    , char, char 
                    , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_MOBILE_HPP