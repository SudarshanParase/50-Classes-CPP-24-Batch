#ifndef SHOEI_LIMITATIONS_HPP
#define SHOEI_LIMITATIONS_HPP

#include <iostream>
#include <string>

class Shoei_Limitations
{
    private:

        std::string Price;
        std::string Modular;
        std::string No;

    public:

        Shoei_Limitations(std::string _1, std::string _2
                        , std::string _3); // Only Declaration

        void show(); // Only Declaration

};

#endif // SHOEI_LIMITATIONS_HPP