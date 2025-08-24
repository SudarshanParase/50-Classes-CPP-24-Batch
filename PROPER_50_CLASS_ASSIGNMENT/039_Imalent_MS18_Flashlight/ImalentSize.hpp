#ifndef IMALENT_SIZE_HPP
#define IMALENT_SIZE_HPP

#include <iostream>
#include <string>

class Imalent_Size
{
    private:
    
        std::string Length;
        std::string Head;
        std::string Body;
        std::string Weight;
        std::string Grip;
        std::string Color;
        std::string Display;

    public:

        Imalent_Size(std::string, std::string 
                    , std::string, std::string 
                    , std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // IMALENT_SIZE_HPP