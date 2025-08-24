#ifndef APPLE_PERFORMANCE_HPP
#define APPLE_PERFORMANCE_HPP

#include <iostream>
#include <string>

class Apple_Performance
{
    private:

        std::string Processor;
        std::string Neural_Engine;
        std::string Storage;
        std::string RAM;
        std::string OS;

    public:

        Apple_Performance(std::string, std::string
                        , std::string, std::string  
                        , std::string); // Only Declaration

        void show(); // Only Declaration
}; 


#endif // APPLE_PERFORMANCE_HPP