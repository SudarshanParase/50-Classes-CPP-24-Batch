#ifndef AQUA_ADVANTAGES_HPP
#define AQUA_ADVANTAGES_HPP

#include <iostream>
#include <string>

class Aqua_Advantages
{
    private:

        std::string Max;
        std::string High;
        std::string Lab;
        std::string Compact;

    public:

        Aqua_Advantages(std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AQUA_ADVANTAGES_HPP