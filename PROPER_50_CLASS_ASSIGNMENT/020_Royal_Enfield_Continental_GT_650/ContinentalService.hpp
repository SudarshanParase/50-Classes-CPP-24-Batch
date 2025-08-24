#ifndef CONTINENTAL_SERVICE_HPP
#define CONTINENTAL_SERVICE_HPP

#include <iostream>
#include <string>

class Continental_Service
{
    private:

        std::string First;
        std::string Second;
        std::string Third;
        std::string Fourth;
        
    public:

        Continental_Service(std::string, std::string 
                            , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CONTINENTAL_SERVICE_HPP