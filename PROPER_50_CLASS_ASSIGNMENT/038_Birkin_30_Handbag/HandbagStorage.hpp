#ifndef HANDBAG_STORAGE_HPP
#define HANDBAG_STORAGE_HPP

#include <iostream>
#include <string>

class Handbag_Storage
{
    private:

        std::string Interior;
        std::string Laptop;
        std::string Closure;
        std::string Wear;
        std::string Water;

    public:

        Handbag_Storage(std::string, std::string 
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDBAG_STORAGE_HPP