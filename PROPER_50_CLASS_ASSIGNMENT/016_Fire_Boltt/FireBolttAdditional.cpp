#include "FireBolttAdditional.hpp"

Additional_Information::Additional_Information
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8
        , std::string _9)
        {
            ASIN = _1;
            Customer_Reviews = _2;
            Best_Sellers_Rank = _3;
            Date_First_Available = _4;
            Packer = _5;
            Importer = _6;
            Item_Dimenisons = _7;
            Net_Quantity = _8;
            Generic_Name = _9;
        }

void Additional_Information::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------- A D D I T I O N A L   I N F O R M A T I O N ----------------------" << endl << endl;
    
    cout << "ASIN                                   : " << ASIN << endl;
    cout << "Customer Reviews                       : " << Customer_Reviews << endl;
    cout << "Best Sellers Rank                      : " << Best_Sellers_Rank << endl;
    cout << "Date First Available                   : " << Date_First_Available << endl;
    cout << "Packer                                 : " << Packer << endl;
    cout << "Importer                               : " << Importer << endl;
    cout << "Item Dimensions L x W x H              : " << Item_Dimenisons << endl;
    cout << "Net Quantity                           : " << Net_Quantity << endl;
    cout << "Generic Name                           : " << Generic_Name << endl << endl;
}