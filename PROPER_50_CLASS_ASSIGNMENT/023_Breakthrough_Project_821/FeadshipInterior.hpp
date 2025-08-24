#ifndef FEADSHIP_INTERIOR_HPP
#define FEADSHIP_INTERIOR_HPP

#include <iostream>
#include <string>

class Feadship_Interior
{
    private:

        std::string Guest;
        std::string Crew;
        std::string Layout;
        std::string Special;
        std::string Luxury;

    public:

        Feadship_Interior(std::string, std::string
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // FEADSHIP_INTERIOR_HPP