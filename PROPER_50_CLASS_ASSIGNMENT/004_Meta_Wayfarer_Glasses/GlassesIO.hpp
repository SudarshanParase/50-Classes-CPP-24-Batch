#ifndef GLASSES_IO_HPP
#define GLASSES_IO_HPP

#include <iostream>
#include <string>

class Glasses_IO 
{
    private:

        short int Internal_Storage;
        std::string Lens_Type;
        std::string Camera;
        std::string Microphone;
        std::string Speakers;
        std::string Noise;

    public:

        Glasses_IO(short int, std::string, std::string
                , std::string, std::string, std::string); // Only Declaration

        void show();
};

#endif // GLASSES_IO_HPP