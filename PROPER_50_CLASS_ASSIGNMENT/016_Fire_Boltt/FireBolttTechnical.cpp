#include "FireBolttTechnical.hpp"

Technical_Information::Technical_Information
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5, std::string _6  
    , std::string _7, std::string _8
    , std::string _9, std::string _10 
    , std::string _11 , std::string _12 
    , std::string _13 , std::string _14 
    , std::string _15 , char _16
    , std::string _17 , std::string _18 
    , char _19 , std::string _20 )
    {

        Brand = _1;
        Manufacturer = _2;
        Series = _3;
        Colour = _4;
        Item_Height = _5;
        Item_Width = _6;
        Display_Size = _7;
        Product_Dimensions = _8;
        Batteries = _9;
        Item_Model_No = _10;
        Connectivity = _11;
        Wireless = _12;
        Operating_System = _13;
        Battery_Charge_Time = _14;
        Average_Battery_Life = _15;
        Are_Batteries_Included = _16;
        Lithium_Battery_Energy = _17;
        Lithium_Battery_Weight = _18;
        No_of_Lithium = _19;
        Included_Components = _20;
    
    }

void Technical_Information::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- T E C H N I C A L   I N F O R M A T I O N -----------------------" << endl << endl;
    
    cout << "Brand                                  : " << Brand << endl;
    cout << "Manufacturer                           : " << Manufacturer << endl;
    cout << "Series                                 : " << Series << endl;
    cout << "Colour                                 : " << Colour << endl;
    cout << "Item Height                            : " << Item_Height << endl;
    cout << "Item Width                             : " << Item_Width << endl;
    cout << "Standing Screen Display Size           : " << Display_Size << endl;
    cout << "Product Dimensions                     : " << Product_Dimensions << endl;
    cout << "Batteries                              : " << Batteries << endl;
    cout << "Item Model Number                      : " << Item_Model_No << endl;
    cout << "Connectivity Type                      : " << Connectivity << endl;
    cout << "Wireless Type                          : " << Wireless << endl;
    cout << "Operating System                       : " << Operating_System << endl;
    cout << "Battery Charge Time (in Hours)         : " << Battery_Charge_Time << endl;
    cout << "Average Battery Life (in hours)        : " << Average_Battery_Life << endl;
    cout << "Are Batteries Included                 : " << Are_Batteries_Included << endl;
    cout << "Lithium Battery Energy Content         : " << Lithium_Battery_Energy << endl;
    cout << "Lithium Battery Weight                 : " << Lithium_Battery_Weight << endl;
    cout << "Number of Lithium Ion Cells            : " << No_of_Lithium << endl;
    cout << "Included Components                    : " << Included_Components << endl << endl;
    
}