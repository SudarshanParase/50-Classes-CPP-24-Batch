#ifndef SAMSUNG_MEMORY_HPP
#define SAMSUNG_MEMORY_HPP

#include <iostream>
#include <string>

class Samsung_Memory
{
    private:

        std::string RAM;
        char RAM_Type;
        short int Storage;
        std::string Storage_Type;

    public:

        Samsung_Memory(std::string, char 
                    , short int, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_MEMEORY_HPP