#ifndef RING_GEMOLOGICAL_HPP
#define RING_GEMOLOGICAL_HPP

#include <iostream>
#include <string>

class Ring_Gemological
{
    private:

        std::string Color;
        std::string Exceptional;
        std::string Type;
        std::string Provenance;

    public:

        Ring_Gemological(std::string, std::string 
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};
#endif // RING_GEMOLOGICAL_HPP