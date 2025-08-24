#ifndef MERCEDES_LOCKS_HPP
#define MERCEDES_LOCKS_HPP

#include <iostream>
#include <string>

class Mercedes_Locks
{
    private:

        char Engine;
        std::string Central;
        char Child_Safety;
        char Speed_Sensing;

    public:

        Mercedes_Locks(char, std::string 
                    , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_LOCKS_HPP