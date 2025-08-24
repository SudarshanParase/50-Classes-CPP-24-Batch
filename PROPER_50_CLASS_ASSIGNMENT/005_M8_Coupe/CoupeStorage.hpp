#ifndef COUPE_STORAGE_HPP
#define COUPE_STORAGE_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Storage
{
    private:

        // Data Member
        std::string Cup;
        char Driver;

    public:

        // Constructor
        Coupe_Storage(std::string, char); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_STORAGE_HPP