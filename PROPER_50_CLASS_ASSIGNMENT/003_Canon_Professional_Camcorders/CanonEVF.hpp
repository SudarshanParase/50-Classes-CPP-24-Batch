#ifndef CANON_EVF_HPP
#define CANON_EVF_HPP

#include <iostream>
#include <string>

class Canon_EVF
{
    private:

        std::string Display_Type;
        std::string Screen_Size;
        int EVF_Resolution;

    public:

        Canon_EVF(std::string, std::string, int); // Only Declaration

        void show(); // Only Declaration
};

#endif // CANON_EVF_HPP