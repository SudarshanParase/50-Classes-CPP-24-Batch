// Header File Inclusion
#include <iostream>
#include <string>

class Technical_Details
{
    private:

        std::string Brand;
        std::string Manufacturer;
        std::string Model;
        std::string Product_Demensions;
        std::string Batteries;
        std::string Item_Model_Number;
        std::string Mounting_Hardware;
        char No_of_items;
        std::string Aspect_Ratio;
        char Batteries_Included;
        char Batteries_Required;
        std::string Battery_Cell_Composition;
        std::string Wireless_Type;
        short int Refresh_Rate;
        std::string Material;
        short int Item_Weight;

    public:

        Technical_Details(std::string _1, std::string _2, std::string _3, std::string _4, std::string _5
                        , std::string _6, std::string _7, char _8, std::string _9, char _10 
                        , char _11, std::string _12, std::string _13, short int _14, std::string _15
                        , short int _16)
        {
            Brand = _1;
            Manufacturer = _2;
            Model = _3;
            Product_Demensions = _4;
            Batteries = _5;
            Item_Model_Number = _6;
            Mounting_Hardware = _7;
            No_of_items = _8;
            Aspect_Ratio = _9;
            Batteries_Included = _10;
            Batteries_Required = _11;
            Battery_Cell_Composition = _12;
            Wireless_Type = _13;
            Refresh_Rate = _14;
            Material = _15;
            Item_Weight = _16;
        }

        void display()
        {
            using std::cout;
            using std::endl;

            cout << "------------------- T E C H N I C A L   D E T A I L S -------------------" << endl << endl;

            cout << "Brand                                      : " << Brand << endl;
            cout << "Manufacturer                               : " << Manufacturer << endl;
            cout << "Model                                      : " << Model << endl;
            cout << "Product Dimensions                         : " << Product_Demensions << endl;
            cout << "Batteries                                  : " << Batteries << endl;
            cout << "Item Model Number                          : " << Item_Model_Number << endl;
            cout << "Mounting Hardware                          : " << Mounting_Hardware << endl;
            cout << "Number of Items                            : " << No_of_items << endl;
            cout << "Aspect Ratio                               : " << Aspect_Ratio << endl;
            cout << "Batteries Included                         : " << Batteries_Included << endl;
            cout << "Batteries Required                         : " << Batteries_Required << endl;
            cout << "Battery Cell Composition                   : " << Battery_Cell_Composition << endl;
            cout << "Wireless Type                              : " << Wireless_Type << endl;
            cout << "Refresh Rate                               : " << Refresh_Rate << endl;
            cout << "Material                                   : " << Material << endl;
            cout << "Item Weight                                : " << Item_Weight << endl << endl; 

        }

};

class Additional_Info
{
    private:

    std::string ASIN;
    std::string Customer_Reviews;
    std::string Best_Sellers_Rank;
    std::string Date_First_Available;
    std::string Item_Dimensions;

    public:

    Additional_Info(std::string _1, std::string _2, std::string _3
                  , std::string _4, std::string _5)
    {
        ASIN = _1;
        Customer_Reviews = _2;
        Best_Sellers_Rank = _3;
        Date_First_Available = _4;
        Item_Dimensions = _5;
    }
    
    void display()
    {
        using std::cout;
        using std::endl;

        
        cout << "--------------------- A D D I T I O N A L   I N F O ---------------------" << endl << endl;

        cout << "ASIN                                       : " << ASIN << endl;
        cout << "Customer Reviews                           : " << Customer_Reviews << endl;
        cout << "Best Sellers Rank                          : " << Best_Sellers_Rank << endl;
        cout << "Date First Available                       : " << Date_First_Available << endl;
        cout << "Item Dimensions L x W x H                  : " << Item_Dimensions << endl << endl;

    }

};

int main(void)
{
    
    std::cout << "======================== F L I P P E R   Z E R O ========================" << std::endl << std::endl;

    Technical_Details Details("db-tronic", "db-tronic", "Flipper Zero Device", "12.5 x 6 x 5 cm; 150 g", "1 Lithium lon batteries required.", "Flipper Zero Device"
                            , "Flipper Zero, USB-C charging\n\t\t\t\t\t\t cable, instrucitons(English\n\t\t\t\t\t\t langauge not guaranteed)", '1', "16:9",'N', 'N', "Lithium Ion", "Bluetooth"
                            , 60, "Stainless Steel", 150);

                            Details.display();

    Additional_Info Info("B0D5ZBSBDL","4.1 out of 5 stars", " #20,802 in Home Improvement (See\n\t\t\t\t\t\t Top 100 in Home Improvement)\n\t\t\t\t\t\t #29 in Multitools & Accessories"
                       , "29 June 2024", "12.5 x 6 x 5 Centimeters");

                       Info.display();
    return (0);
};
