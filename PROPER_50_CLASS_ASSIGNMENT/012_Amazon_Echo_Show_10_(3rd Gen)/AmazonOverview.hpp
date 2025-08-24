#ifndef AMAZON_OVERVIEW_HPP
#define AMAZON_OVERVIEW_HPP

#include <iostream>
#include <string>

class Amazon_Overview
{
    private:

        std::string Model;
        std::string Release_Date;
        std::string Price_Range;
        std::string Smart_Assistant;
        std::string  Display_Type;
        std::string Use_Case;

    public:

        Amazon_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration
                    
        void show(); // Only Declaration
};

#endif // AMAZON_OVERVIEW_HPP