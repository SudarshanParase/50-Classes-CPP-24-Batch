#ifndef PATEK_LIMITATIONS_HPP
#define PATEK_LIMITATIONS_HPP

#include <iostream>
#include <string>

class Patek_Limitations
{
    private:

        std::string Practical;
        std::string Complications;
        std::string Very;

    public:

        Patek_Limitations(std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // PATEK_LIMITATIONS_HPP