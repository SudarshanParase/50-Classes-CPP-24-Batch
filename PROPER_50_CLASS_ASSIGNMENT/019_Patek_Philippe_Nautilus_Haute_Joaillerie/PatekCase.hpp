#ifndef PATEK_CASE_HPP
#define PATEK_CASE_HPP

#include <iostream> 
#include <string>

class Patek_Case
{
    private:

        std::string Case;
        std::string Water;
        std::string Bracelet;
        std::string Clasp;

    public:

        Patek_Case(std::string, std::string
                , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
    
};


#endif // PATEK_CASE_HPP