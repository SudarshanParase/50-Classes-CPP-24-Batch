#ifndef FEADSHIP_LIMITATIONS_HPP
#define FEADSHIP_LIMITATIONS_HPP

#include <iostream>
#include <string>

class Feadship_Limitations
{
    private:

        std::string Ultra;
        std::string Specialized;
        std::string Niche;

    public:

        Feadship_Limitations(std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration

};

#endif // FEADSHIP_LIMITATIONS_HPP