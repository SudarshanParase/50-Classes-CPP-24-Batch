#ifndef KOENIGSEGG_INTERIOR_HPP
#define KOENIGSEGG_INTERIOR_HPP

#include <iostream>
#include <string>

class Koenigsegg_Interior
{
    private:

        std::string Seating;
        std::string Material;
        std::string Infotainment;
        std::string Amenities;

    public:

        Koenigsegg_Interior(std::string, std::string
                            , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // KOENIGSEGG_INTERIOR_HPP