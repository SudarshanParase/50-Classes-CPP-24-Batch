#ifndef CHARGER_INPUT_HPP
#define CHARGER_INPUT_HPP

#include <iostream>
#include <string>

class Charger_Input
{
    private:

        std::string USB;
        std::string Vehicle;
        std::string Service;
        std::string Solar;

    public:

        Charger_Input(std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CHARGER_INPUT_HPP