#ifndef RING_OVERVIEW_HPP
#define RING_OVERVIEW_HPP

#include <iostream>
#include <string>

class Ring_Overview
{
    private:

        std::string Gemstone;
        std::string Carat;
        std::string Cut;
        std::string Clarity;
        std::string Diamond;
        std::string Setting;

    public:

        Ring_Overview(std::string, std::string 
                    , std::string, std::string 
                    , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // RING_OVERVIEW_HPP