// Header file Inclusion
#include <iostream>
#include <string>

class Technical_Details
{
    private:
        std::string Colour;
        std::string Brand;
        std::string Towel_from_Type;
        std::string Age_Range;
        std::string Material;               // 5
        std::string Product_Dimensions;
        char No_of_Items;
        std::string Style;
        std::string Pattern;
        std::string Special_Feature;        // 10
        std::string Theme;
        short int Fabric_Weight;
        std::string Product_Care_Instructions;
        std::string Shape;
        std::string Size;                   // 15
        float Net_Quantity;
        std::string Fabric_Type;
        short int Item_Weight; 
        std::string Model_Name;
        std::string Manufacturer;           // 20
        std::string Item_Model_Number;
        std::string Manufacturer_Part_Number;
        std::string Volume;
        std::string Size_1;
        char Assembly_Required;             // 25
        std::string Country_of_Origin;
               

    public:

        Technical_Details(std::string _1, std::string _2, std::string _3, std::string _4, std::string _5
                        , std::string _6, char _7, std::string _8, std::string _9, std::string _10 
                        , std::string _11, short int _12, std::string _13, std::string _14, std::string _15 
                        , float _16, std::string _17, short int _18, std::string _19, std::string _20 
                        , std::string _21, std::string _22, std::string _23, std::string _24, char _25 
                        , std::string _26) 
                        : Colour(_1), Brand(_2), Towel_from_Type(_3), Age_Range(_4), Material(_5)
                        , Product_Dimensions(_6), No_of_Items(_7), Style(_8), Pattern(_9), Special_Feature(_10)
                        , Theme(_11), Fabric_Weight(_12), Product_Care_Instructions(_13), Shape(_14), Size(_15)
                        , Net_Quantity(_16), Fabric_Type(_17), Item_Weight(_18), Model_Name(_19), Manufacturer(_20)
                        , Item_Model_Number(_21), Manufacturer_Part_Number(_22), Volume(_23), Size_1(_24), Assembly_Required(_25)
                        , Country_of_Origin(_26) {}
        void show()
        {
            using std::cout;
            using std::endl;

            cout << "------------------------- T E C H N I C A L   I N F O -------------------------" << endl << endl;
            
            cout << "Colour                                 : " << Colour << endl;
            cout << "Brand                                  : " << Brand << endl;
            cout << "Towel From Type                        : " << Towel_from_Type << endl;
            cout << "Age Range (Description)                : " << Age_Range << endl;
            cout << "Material                               : " << Material << endl;
            cout << "Prodcut Dimensions                     : " << Product_Dimensions << endl;
            cout << "Number of Items                        : " << No_of_Items << endl;
            cout << "Style                                  : " << Style << endl;
            cout << "Pattern                                : " << Pattern << endl;
            cout << "Special Feature                        : " << Special_Feature << endl;
            cout << "Theme                                  : " << Theme << endl;
            cout << "Fabric Weight                          : " << Fabric_Type << " Grams" << endl;
            cout << "Product Care Instructions              : " << Product_Care_Instructions << endl;
            cout << "Shape                                  : " << Shape << endl;
            cout << "Size                                   : " << Size << endl;
            cout << "Net Quantity                           : " << Net_Quantity << " Count" << endl;
            cout << "Fabric Type                            : " << Fabric_Type << endl;
            cout << "Item Weight                            : " << Item_Weight << " Grams" << endl;
            cout << "Model Name                             : " << Model_Name << endl;
            cout << "Manufacturer                           : " << Manufacturer << endl;
            cout << "Item Model Number                      : " << Item_Model_Number << endl;
            cout << "Manufacturer Part Number               : " << Manufacturer_Part_Number << endl;
            cout << "Volume                                 : " << Volume << endl;
            cout << "Size                                   : " << Size_1 << endl;
            cout << "Assembly Required                      : " << Assembly_Required << endl;
            cout << "Country of Origin                      : " << Country_of_Origin << endl << endl;

        }
};

class Additional_Info
{
    private:

        std::string ASIN;
        std::string Customer_Reviews;
        std::string Best_Sellers_Rank;
        std::string Date_First_Available;
        std::string Packer;
        std::string Importer;
        std::string Net_Quantity;
        std::string Generic_Name;


    public:

        Additional_Info(std::string _1, std::string _2, std::string _3, std::string _4
                      , std::string _5, std::string _6, std::string _7, std::string _8)
                      : ASIN(_1), Customer_Reviews(_2), Best_Sellers_Rank(_3), Date_First_Available(_4)
                      , Packer(_5), Importer(_6), Net_Quantity(_7), Generic_Name(_8) {}
        
        void show()
        {
            using std::cout;
            using std::endl;

            
            cout << "------------------------ A D D I T I O N A L   I N F O ------------------------" << endl << endl;
            
            cout << "ASIN                                   : " << ASIN << endl;
            cout << "Customer Reviews                       : " << Customer_Reviews << endl;
            cout << "Best Sellers Rank                      : " << Best_Sellers_Rank << endl;
            cout << "Date First Available                   : " << Date_First_Available << endl;
            cout << "Packer                                 : " << Packer << endl;
            cout << "Importer                               : " << Importer << endl;
            cout << "Net Quantity                           : " << Net_Quantity << endl;
            cout << "Generic Name                           : " << Generic_Name << endl << endl;

        }
};

int main(void)
{ 
    std::cout << "============================ M I C R O   F I B E R ============================" << std::endl << std::endl;

    Technical_Details Details("Grey Pack of 4 340 gsm", "SOFTSPUN", "Cleaning Cloth", "Adult", "Microfiber", "40L x 40W Centimeters", '4', "Classic", "Solid"
                            , "Durable,Premium,Reusable,Super\n\t\t\t\t\t Soft,Fast Dry,Lint Free,Lightweight,\n\t\t\t\t\t Super Absorbent", "Sport", 217, "Machine Wash"
                            , "Square", "4 Count (Pack of 1)", 1.00, "Microfiber", 217, "4X4-CAR-GY4", "ICC CHEMTEC PVT LTD, ICC\n\t\t\t\t\t CHEMTEC PVT LTD, C-67, INDIRA ENLVAE\n\t\t\t\t\t NEB SARAI NEW DELHI - 110068\n\t\t\t\t\t +91-9810019265 SOFTSPUNONLINE@GMAIL.COM"
                            , "4X4-CAR-GY4", "4X4-CAR-GY4", "1 Mililitres", "Medium", 'N', "India");

                            Details.show();

    Additional_Info Info("B077BFH786", "4.3 out of 5 stars", "#1 in Car & Motorbike (See Top 100 in Car & Motorbike)\n\t\t\t\t\t #1 in Exterior Car Care Microfibre Cloths", "22 March 2018" 
                        , "ICC CHEMTEC PVT LTD, C-67,\n\t\t\t\t\t INDIRA ENLVAE NEB SARAI NEW DELHI\n\t\t\t\t\t - 110068 +91-9810019265 SOFTSPUNONLINE@GMAIL.COM" 
                        , "ICC CHEMTEC PVT LTD, C-67,\n\t\t\t\t\t INDIRA ENLVAE NEB SARAI NEW DELHI\n\t\t\t\t\t - 110068 +91-9810019265 SOFTSPUNONLINE@GMAIL.COM", "1.000 Count", "MICROFIBER TOWEL");

                        Info.show();
    return (0);
}