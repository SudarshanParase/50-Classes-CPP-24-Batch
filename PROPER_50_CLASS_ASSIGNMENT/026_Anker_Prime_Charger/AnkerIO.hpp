#ifndef ANKER_IO_HPP
#define ANKER_IO_HPP

#include <iostream>
#include <string>

class Anker_IO
{
    private:

        std::string Power;
        std::string Total;
        std::string USB_1;
        std::string USB_2;
        std::string Charging;
        std::string Smart;

    public:

        Anker_IO(std::string, std::string
                , std::string, std::string
                , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
        
};

#endif // ANKER_IO_HPP