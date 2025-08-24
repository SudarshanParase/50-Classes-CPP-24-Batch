#ifndef DEFENDER_LOCKS_HPP
#define DEFENDER_LOCKS_HPP

#include <iostream>
#include <string>

class Defender_Locks
{
    private:

        char Engine;
        std::string Central;
        char Child_Safety;
        char Speed_Sensing;

    public:

        Defender_Locks(char, std::string 
                    , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_LOCKS_HPP