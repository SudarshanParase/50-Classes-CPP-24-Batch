#ifndef APPLE_STORAGE_HPP
#define APPLE_STORAGE_HPP

#include <iostream>
#include <string>

class Apple_Storage
{
    private:

        std::string Type;
        std::string Configurations;
        std::string Read;
        std::string Write;
        char User;

    public:

        Apple_Storage(std::string, std::string 
                , std::string, std::string
                , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_STORAGE_HPP