#ifndef APPLE_MEMORY_HPP
#define APPLE_MEMORY_HPP

#include <iostream>
#include <string>

class Apple_Memory
{
    private:

        std::string RAM;
        short int Storage;
        char Card_Slot;

    public:

        Apple_Memory(std::string, short int
                    , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_MEMORY_HPP