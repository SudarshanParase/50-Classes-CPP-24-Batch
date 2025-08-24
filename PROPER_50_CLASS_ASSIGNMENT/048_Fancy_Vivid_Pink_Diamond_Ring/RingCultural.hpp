#ifndef RING_CULTURAL_HPP
#define RING_CULTURAL_HPP

#include <iostream>
#include <string>

class Ring_Cultural
{
    private:

        std::string World;
        std::string Ultimate;
        std::string Celebrity;

    public:

        Ring_Cultural(std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declartion
};

#endif // RING_CULTURAL_HPP