#ifndef ARRMA_OVERVIEW_HPP
#define ARRMA_OVERVIEW_HPP

#include <iostream>
#include <string>

class Arrma_Overview
{
    private:

        std::string Model_Name;
        std::string Scale;
        std::string Vehicle_Type;
        std::string Recommended_Use;
        std::string Top_Speed;
        std::string Skill_Level;
        std::string RTR;

    public:

        Arrma_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ARRMA_OVERVIEW_HPP