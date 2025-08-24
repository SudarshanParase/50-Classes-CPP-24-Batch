#include "AtherAdditionalFeatures.hpp"

Ather_Additional_Features::Ather_Additional_Features(std::string _1)
{
    Additional_F = _1;
}

void Ather_Additional_Features::show()
{
    
    std::cout << "-------------------- A D D I T I O N A L   F E A T U R E S ----------------" << std::endl << std::endl;
    
    std::cout << "Additional Features                        : " << Additional_F << std::endl << std::endl;
}