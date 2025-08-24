#ifndef COUPE_MANUFACTURER_HPP
#define COUPE_MANUFACTURER_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Manufacturer
{
    private:

        // Data Member
        char Vehicle_Warranty_1;
        std::string Vehicle_Warranty_2;

    public:

        // Constructor
        Coupe_Manufacturer(char, std::string); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_MANUFACTURER_HPP