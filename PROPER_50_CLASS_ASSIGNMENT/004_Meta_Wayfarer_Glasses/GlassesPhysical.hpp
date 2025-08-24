#ifndef GLASSES_PHYSICAL_HPP
#define GLASSES_PHYSICAL_HPP

#include <iostream>
#include <string>

class Glasses_Physical
{
    private:

        std::string Color;
        std::string Material;
        std::string Dimensions;
        std::string Weight;

    public:

        Glasses_Physical(std::string, std::string
                        ,std::string, std::string); // Only Declaration
        
        void show(); // Only Declaration
};


#endif // GLASSES_PHYSICAL_HPP