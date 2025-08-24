#ifndef APPLE_GPU_HPP
#define APPLE_GPU_HPP

#include <iostream>
#include <string>

class Apple_GPU
{
    private:

        std::string Type;
        std::string Cores;
        std::string VRAM;
        std::string Performance;
        std::string Pro_Workloads;

    public:

        Apple_GPU(std::string, std::string
                , std::string, std::string
                , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_GPU_HPP