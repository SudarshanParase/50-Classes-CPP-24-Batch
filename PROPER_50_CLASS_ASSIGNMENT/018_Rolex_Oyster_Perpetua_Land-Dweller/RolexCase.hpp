#ifndef ROLEX_CASE_HPP
#define ROLEX_CASE_HPP

#include <iostream>
#include <string>

class Rolex_Case
{
    private:

        std::string Case;
        std::string Water;
        std::string Bracelet;
        std::string Clasp;

    public:

        Rolex_Case(std::string, std::string
                , std::string, std::string); // Only Declaration

        void show(); // Only Declaration

};

#endif // ROLEX_CASE_HPP