#ifndef ANKER_LIMITATIONS_HPP
#define ANKER_LIMITATIONS_HPP

#include <iostream>
#include <string>

class Anker_Limitations
{
    private:

        std::string Wireless;
        std::string Bulky;
        std::string Relatively;

    public:

        Anker_Limitations(std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ANKER_LIMITATIONS_HPP