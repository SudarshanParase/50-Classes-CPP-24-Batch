#include "SamsungSpeaker.hpp"

Samsung_Speaker::Samsung_Speaker(char _1)
{
    Built_In_Speakers = _1;
}

void Samsung_Speaker::show()
{
    
    std::cout << "---------------------------- S P E A K E R ----------------------------" << std::endl << std::endl;
            
    std::cout << "Built-In Speakers                      : " << Built_In_Speakers << std::endl << std::endl;
}