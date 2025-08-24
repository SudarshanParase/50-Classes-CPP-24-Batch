#ifndef AO_HIGHLIGHTS_HPP
#define AO_HIGHLIGHTS_HPP

#include <iostream>
#include <string>

class AO_Highlights
{
    private:
    
        std::string Glass;
        std::string High;
        std::string Fast;
        std::string Built;
        std::string Reliable;

    public:

        AO_Highlights(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AO_HIGHLIGHTS_HPP