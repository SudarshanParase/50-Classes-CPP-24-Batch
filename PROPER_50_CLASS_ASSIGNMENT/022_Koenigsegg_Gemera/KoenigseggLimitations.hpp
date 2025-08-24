#ifndef KOENIGSEGG_LIMITATIONS_HPP
#define KOENIGSEGG_LIMITATIONS_HPP


#include <iostream>
#include <string>

class Koenigsegg_Limitations
{
    private:

        std::string Ultra;
        std::string Cost;
        std::string Service;

    public:

        Koenigsegg_Limitations(std::string, std::string
                            , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // KOENIGSEGG_LIMITATIONS_HPP