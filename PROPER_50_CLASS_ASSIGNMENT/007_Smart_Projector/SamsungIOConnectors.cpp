#include "SamsungIOConnectors.hpp"

Samsung_IO::Samsung_IO(std::string _1)
{
    IO = _1;
}

void Samsung_IO::show()
{

    std::cout << "-----------------------------I / O   C O N N E C T O R S -------------------------" << std::endl << std::endl;
    
    std::cout << "Inputs/Outputs                     : " << IO << std::endl << std::endl;
}