#ifndef CANON_INTERFACE_HPP
#define CANON_INTERFACE_HPP

#include <iostream>
#include <string>

class Canon_Interface
{
    private:

        std::string Video_Connectors;
        std::string Audio_Connectors;
        std::string Other_IO;
        std::string Wireless_Interfaces;

    public:

        Canon_Interface(std::string, std::string
                      , std::string, std::string); // Only Declaration


        void show(); // Only Declaration
};

#endif // CANON_INTERFACE_HPP