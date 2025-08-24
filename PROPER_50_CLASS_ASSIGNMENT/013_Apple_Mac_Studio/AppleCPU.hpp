#ifndef APPLE_CPU_HPP
#define APPLE_CPU_HPP

#include <iostream>
#include <string>

class Apple_CPU
{
    private:

        std::string Chip;
        std::string Cores;
        std::string Threads;
        std::string Base_Clock;
        std::string Cache;
        std::string TDP;

    public:

        Apple_CPU(std::string, std::string
                , std::string, std::string
                , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_CPU_HPP