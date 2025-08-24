#ifndef CANON_CONNECTIVITY_HPP
#define CANON_CONNECTIVITY_HPP

#include <iostream>
#include <string>

class Canon_Connectivity
{
    private:

        std::string Data_IO;
        std::string Wireless;
        std::string Direct_Printing;
        std::string Internal_Memory;
        std::string OS_Compatibility;

    public:

        Canon_Connectivity(std::string, std::string 
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};
#endif // CANON_CONNECTIVITY_HPP