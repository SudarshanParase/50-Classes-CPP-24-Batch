#ifndef KETTLE_DESIGN_HPP
#define KETTLE_DESIGN_HPP

#include <iostream>
#include <string>

class Kettle_Design
{
    private:

        std::string Aesthetic;
        std::string Usability;
        std::string Maintenance;
        std::string Warranty;

    public:

        Kettle_Design(std::string, std::string 
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};


#endif // KETTLE_DESIGN_HPP