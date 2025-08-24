#include "AppleCPU.hpp"

Apple_CPU::Apple_CPU
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5, std::string _6)
    {
        Chip = _1;
        Cores = _2;
        Threads = _3;
        Base_Clock = _4;
        Cache = _5;
        TDP = _6;
    }

void Apple_CPU::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------------ C P U ------------------------------------" << endl << endl;
    
    cout << "Chip                           : " << Chip << endl;
    cout << "Cores                          : " << Cores << endl;
    cout << "Threads                        : " << Threads << endl;
    cout << "Base Clock                     : " << Base_Clock << endl;
    cout << "Cache                          : " << Cache << endl;
    cout << "TDP                            : " << TDP << endl << endl;
}