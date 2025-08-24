#ifndef DEFENDER_STORAGE_HPP
#define DEFENDER_STORAGE_HPP

#include <iostream>
#include <string>

class Defender_Storage
{
    private:

        std::string Cup;
        char Cooled;
        char Sunglass;
        char Driver;
        char Third_Row;

    public:

        Defender_Storage(std::string, char 
                        , char, char 
                        , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_STORAGE_HPP