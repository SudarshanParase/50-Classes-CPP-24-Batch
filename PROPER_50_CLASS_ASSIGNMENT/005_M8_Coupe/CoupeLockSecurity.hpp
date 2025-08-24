#ifndef COUPE_LOCK_SECURITY_HPP
#define COUPE_LOCK_SECURITY_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_LockSecurity
{
    private:

        // Data Member
        char Engine_Immobiliser;
        std::string Central_Locking;
        char Child_Safety;
        char Speed_Sensing;

    public:

        // Constructor
        Coupe_LockSecurity(char, std::string
                        , char, char); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_LOCK_SECURITY_HPP 