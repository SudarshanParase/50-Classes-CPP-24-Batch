#ifndef APPLE_RAM_HPP
#define APPLE_RAM_HPP

#include <iostream> 
#include <string>

class Apple_Ram
{
    private:

        std::string Type;
        std::string Configurations;
        std::string Memory;
        char User;

    public:

        Apple_Ram(std::string, std::string 
                , std::string, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_RAM_HPP