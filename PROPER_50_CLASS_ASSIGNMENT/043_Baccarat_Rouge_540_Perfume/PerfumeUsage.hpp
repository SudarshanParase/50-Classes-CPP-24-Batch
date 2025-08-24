#ifndef PERFUME_USAGE_HPP
#define PERFUME_USAGE_HPP

#include <iostream>
#include <string>

class Perfume_Usage
{
    private:

        std::string Application;
        std::string Storage;
        std::string Shelf;

    public:

        Perfume_Usage(std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // PERFUME_USAGE_HPP