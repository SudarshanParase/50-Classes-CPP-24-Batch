#ifndef MERCEDES_STORAGE_HPP
#define MERCEDES_STORAGE_HPP

#include <iostream>
#include <string>

class Mercedes_Storage
{
    private:

        std::string Cup;
        char Cooled;
        char Sunglass;
        char Driver;
        char Third_Row;

    public:

        Mercedes_Storage(std::string, char 
                        , char, char 
                        , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_STORAGE_HPP