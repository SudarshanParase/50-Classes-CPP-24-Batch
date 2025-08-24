#ifndef RING_DESIGN_HPP
#define RING_DESIGN_HPP

#include <iostream>
#include <string>

class Ring_Design
{
    private:

        std::string Visual;
        std::string Design;
        std::string Hallmarks;

    public:

        Ring_Design(std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // RING_DESIGN_HPP