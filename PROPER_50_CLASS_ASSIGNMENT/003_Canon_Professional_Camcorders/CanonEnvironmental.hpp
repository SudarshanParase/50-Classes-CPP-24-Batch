#ifndef CANON_ENVIRONMENTAL_HPP
#define CANON_ENVIRONMENTAL_HPP

#include <iostream>
#include <string>

class Canon_Environmental
{
    private:
    
        std::string Operating_Temperature;
        std::string Operating_Humidity;

    public:

        Canon_Environmental(std::string, std::string); // Only Declaration

        void show(); // Only Declaration


};

#endif // CANON_ENVIRONMENTAL_HPP