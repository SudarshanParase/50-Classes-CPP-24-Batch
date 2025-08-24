#ifndef KOENIGSEGG_OVERVIEW_HPP
#define KOENIGSEGG_OVERVIEW_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Koenigsegg_Overview
{
    private:

        std::string Model;
        std::string Launch;
        std::string Category;
        std::string Body;
        std::string Interior;

    public:

        Koenigsegg_Overview(std::string, std::string
                            , std::string, std::string
                            , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // KOENIGSEGG_OVERVIEW_HPP