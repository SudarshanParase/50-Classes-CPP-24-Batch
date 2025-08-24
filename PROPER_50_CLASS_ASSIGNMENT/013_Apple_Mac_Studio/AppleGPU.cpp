#include "AppleGPU.hpp"

Apple_GPU::Apple_GPU
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Type = _1;
        Cores = _2;
        VRAM = _3;
        Performance = _4;
        Pro_Workloads = _5;
    }

void Apple_GPU::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------------ G P U ------------------------------------" << endl << endl;
    
    cout << "Type                           : " << Type << endl;
    cout << "Cores                          : " << Cores << endl;
    cout << "VRAM                           : " << VRAM << endl;
    cout << "Performance (approx.)          : " << Performance << endl;
    cout << "Pro Workloads                  : " << Pro_Workloads << endl << endl;
}