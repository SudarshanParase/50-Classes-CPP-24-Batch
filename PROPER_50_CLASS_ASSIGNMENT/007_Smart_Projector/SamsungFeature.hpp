#ifndef SAMSUNG_FEATURE_HPP
#define SAMSUNG_FEATURE_HPP

#include <iostream>
#include <string>

class Samsung_Feature
{   
    private:

        std::string Supported_HDR;
        std::string Multi_Input;
        char Built_In_Speaker;
        short int Speaker_Power;
        char Projection;

    public:

        Samsung_Feature(std::string, std::string
                        , char, short int
                        , char); // Only Dec;aration

        void show(); // Only Declaration


};

#endif // SAMSUNG_FEATURE_HPP