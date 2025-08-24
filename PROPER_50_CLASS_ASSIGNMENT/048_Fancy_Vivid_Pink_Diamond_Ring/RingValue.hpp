#ifndef RING_VALUE_HPP
#define RING_VALUE_HPP

#include <iostream>
#include <string>

class Ring_Value
{
    private:

        std::string Auction;
        std::string Adjusted;
        std::string Price;
        std::string Market;

    public:

        Ring_Value(std::string, std::string 
                , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // RING_VALUE_HPP