// Header file Inclusion
#include <iostream>
#include <string>

class Technical_Details
{
    private:
        std::string Brand;
        std::string Manufacturer;
        std::string Model;
        std::string Product_Dimensions;
        short int Batteries;
        std::string Item_Model_No;              // 6
        std::string Hardware_Interface;         // 7
        std::string Compatible_Devices;         // 8
        std::string Special_Features;           // 9
        std::string Mounting_Hardware;          // 10
        std::string Power_Source;               // 11
        short int Battery_Average_Life;
        char Batteries_Included;
        char Batteries_Required;
        std::string Keyboard_Description;       // 15
        std::string Connector_Type;             // 16
        std::string Material;                   // 17
        std::string Hand_Orientation;           // 18
        char Attached_Light;
        short int Item_Weight;

    public:
        Technical_Details(std::string _1, std::string _2, std::string _3, std::string _4, short int _5
                        , std::string _6, std::string _7, std::string _8, std::string _9, std::string _10
                        , std::string _11, short int _12, char _13, char _14, std::string _15, std::string _16 
                        , std::string _17, std::string _18, char _19, short int _20)
        {
            Brand = _1;
            Manufacturer = _2;
            Model = _3;
            Product_Dimensions = _4;
            Batteries = _5;
            Item_Model_No = _6;
            Hardware_Interface = _7;
            Compatible_Devices = _8;
            Special_Features = _9;
            Mounting_Hardware = _10;
            Power_Source = _11;
            Battery_Average_Life = _12;
            Batteries_Included = _13;
            Batteries_Required = _14;
            Keyboard_Description = _15;
            Connector_Type = _16;
            Material = _17;
            Hand_Orientation = _18;
            Attached_Light = _19;
            Item_Weight = _20;
        };

        void display()
        {
            std::cout << "======================== K E Y C H R O N   K 2 ============================" << std::endl << std::endl;

            std::cout << "------------------ T E C H N I C A L  D E T A I L S -----------------------" << std::endl << std::endl;
            
            std::cout << "Brand                                 : " << Brand << std::endl;
            std::cout << "Manufacturer                          : " << Manufacturer << std::endl;
            std::cout << "Model                                 : " << Model << std::endl;
            std::cout << "Product Dimensions                    : " << Product_Dimensions << std::endl;
            std::cout << "Batteries                             : " << Batteries << " Lithium Polymer batteries required." << std::endl;
            std::cout << "Item Model Number                     : " << Item_Model_No << std::endl;
            std::cout << "Hardware Interface                    : " << Hardware_Interface << std::endl;
            std::cout << "Compatible Devices                    : " << Compatible_Devices << std::endl;
            std::cout << "Special Features                      : " << Special_Features << std::endl;
            std::cout << "Mounting Hardware                     : " << Mounting_Hardware << std::endl;
            std::cout << "Power Source                          : " << Power_Source << std::endl;
            std::cout << "Battery Average Life                  : " << Battery_Average_Life << " Hrs"  << std::endl;
            std::cout << "Batteries Included                    : " << Batteries_Included << std::endl;
            std::cout << "Batteries Required                    : " << Batteries_Required << std::endl;
            std::cout << "Keyboard Description                  : " << Keyboard_Description << std::endl;
            std::cout << "Connector Type                        : " << Connector_Type << std::endl;
            std::cout << "Material                              : " << Material << std::endl;
            std::cout << "Hand Orientation                      : " << Hand_Orientation << std::endl;
            std::cout << "Has an attached Light                 : " << Attached_Light << std::endl;
            std::cout << "Item Weight                           : " << Item_Weight << " g" << std::endl << std::endl;
        };
};


class Additional_Info
{
    private:
        std::string ASIN;                   // 1
        float Customer_Reviews;             // 2
        std::string Best_Sellers_Rank;      // 3
        std::string  Date_First_Available;  // 4
        std::string Packer;                 // 5
        std::string Importer;               // 6
        std::string Item_Dimensions;        // 7
        std::string Generic_Name;           // 8

    public:
        Additional_Info(std::string _01, float _02, std::string _03, std::string _04, std::string _05 
                      , std::string _06, std::string _07, std::string _08)
        {
            ASIN = _01;
            Customer_Reviews = _02;
            Best_Sellers_Rank = _03;
            Date_First_Available = _04;
            Packer = _05;
            Importer = _06;
            Item_Dimensions = _07;
            Generic_Name = _08;

        };

    
    void display()
    {
        
        std::cout << "-------------------- A D D I T I O N A L  I N F O -------------------------" << std::endl << std::endl;    

            std::cout << "ASIN                                  : " << ASIN << std::endl;
            std::cout << "Customer Reviews                      : " << Customer_Reviews << std::endl;
            std::cout << "Best Sellers Rank                     : " << Best_Sellers_Rank << std::endl;
            std::cout << "Date First Available                  : " << Date_First_Available << std::endl;
            std::cout << "Packer                                : " << Packer << std::endl;   
            std::cout << "Importer                              : " << Importer << std::endl;
            std::cout << "Item Dimensions LxWxH                 : " << Item_Dimensions << std::endl;
            std::cout << "Generic Name                          : " << Generic_Name << std::endl << std::endl;
    };

    
};

int main(void)
    {
        Technical_Details Details("Keychron", "Keychron", "K2 B3H", "12.3 x 31.3 x 4.1 cm; 900 g", 1
                                , "K2 B3H", "Bluetooth", "linux OS, Windows, iOS, macOS, Android", "Backlit, Rechargeable"
                                , "USB Cable", "Battery Powered", 254, 'N', 'N', "Multimedia", "Bluetooth", "Aluminium, Acrylonitrile Butadiene Styrene"
                                , "Ambidextrous", 'Y', 900);

                                Details.display();

        Additional_Info Info("B08743BCVP", 4.5, "#1,162,770 in Electronics (See Top 100 in Electronics)\n\t\t\t\t\t #1,698 in Keyboards", "6 November 2021"
                           , "support@keychron.in", "Keychron India Private Limited", "12.3 x 31.3 x 4.1 Centimeters", "Keyboard");

                           Info.display();

        return (0);
    }