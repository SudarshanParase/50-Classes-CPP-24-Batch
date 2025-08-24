#ifndef FIRE_BOLTT_ADDITIONAL_HPP
#define FIRE_BOLTT_ADDITIONAL_HPP

#include <iostream>
#include <string>

class Additional_Information
{
    private:

        std::string ASIN;
        std::string Customer_Reviews;
        std::string Best_Sellers_Rank;
        std::string Date_First_Available;
        std::string Packer;
        std::string Importer;
        std::string Item_Dimenisons;
        std::string Net_Quantity;
        std::string Generic_Name;

    public:

        Additional_Information(std::string, std::string
                            , std::string, std::string
                            , std::string, std::string
                            , std::string, std::string
                            , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // FIRE_BOLTT_ADDITIONAL_HPP