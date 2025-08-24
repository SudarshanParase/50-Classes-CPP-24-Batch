#ifndef KETTLE_OVERVIEW_HPP
#define KETTLE_OVERVIEW_HPP

#include <iostream>
#include <string>

class Kettle_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Capacity;
        std::string Category;

    public:

        Kettle_Overview(std::string, std::string 
                    , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};


#endif // KETTLE_OVERVIEW_HPP