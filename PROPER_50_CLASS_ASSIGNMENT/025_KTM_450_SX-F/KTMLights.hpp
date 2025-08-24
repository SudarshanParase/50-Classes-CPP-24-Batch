#ifndef KTM_LIGHTS_HPP
#define KTM_LIGHTS_HPP

#include <iostream>
#include <string>

class Ktm_Lights
{
    private:

        char Headlight;
        char Projector;
        char Dual_Lights;
        char DRLs;
        char Brake;
        char Hazard;
        char Shift_Light;
        char Pass_Light;
        char Turn_Signal;

    public:

        Ktm_Lights(char, char
                , char, char 
                , char, char
                , char, char
                , char); // Only Declaration

        void show(); // Only Declaration
};  

#endif // KTM_LIGHTS_HPP