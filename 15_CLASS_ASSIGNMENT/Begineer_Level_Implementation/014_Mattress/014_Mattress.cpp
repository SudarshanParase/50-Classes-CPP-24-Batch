// Header File Inclusion
#include <iostream>
#include <string>

class Technical_Details
{
    private:
        std::string Color;
        char Is_Assembly_Required;
        std::string Assembly_Type;
        std::string Primary_Material;
        std::string Type_Of_Wood;
        std::string Uphostery_Material;
        std::string Warranty_Summary;
        std::string Style;
        std::string Capacity;
        char No_of_Pieces;
        std::string What_in_the_Box;
        std::string Item_Shape;
        std::string Mattress_Comfort;
        std::string Top_Finish;
        std::string Care_Instructions;
        char No_of_Shelves;
        std::string Shipping_Weight;
        std::string Item_Model_Number;
        std::string Manufacturer;
        std::string Country_Of_Origin;

    public:
        Technical_Details(std::string _1, char _2, std::string _3, std::string _4
                        , std::string _5, std::string _6, std::string _7, std::string _8
                        , std::string _9, char _10, std::string _11, std::string _12
                        , std::string _13, std::string _14, std::string _15, char _16
                        , std::string _17, std::string _18, std::string _19, std::string _20 )
        {
            Color = _1;
            Is_Assembly_Required = _2;
            Assembly_Type = _3;
            Primary_Material = _4;
            Type_Of_Wood = _5;
            Uphostery_Material = _6;
            Warranty_Summary = _7;
            Style = _8;
            Capacity = _9;
            No_of_Pieces = _10;
            What_in_the_Box = _11;
            Item_Shape = _12;
            Mattress_Comfort = _13;
            Top_Finish = _14;
            Care_Instructions = _15;
            No_of_Shelves = _16;
            Shipping_Weight = _17;
            Item_Model_Number = _18;
            Manufacturer = _19;
            Country_Of_Origin = _20;
        }

        void show()
        {
            using std::cout;
            using std::endl;

            cout << "------------------------ T E C H N I C A L   I N F O ------------------------" << endl << endl;

            cout << "Color                              : " << Color << endl;
            cout << "Is Assembly Required               : " << Is_Assembly_Required << endl;
            cout << "Assembly Type                      : " << Assembly_Type << endl;
            cout << "Primary Material                   : " << Primary_Material << endl;
            cout << "Type of Wood                       : " << Type_Of_Wood << endl;
            cout << "Upholstery Material                : " << Uphostery_Material << endl;
            cout << "Warranty Summary                   : " << Warranty_Summary << endl;
            cout << "Style                              : " << Style << endl;
            cout << "Capacity                           : " << Capacity << endl;
            cout << "Number of Pieces                   : " << No_of_Pieces << endl;
            cout << "What is in the Box?                : " << What_in_the_Box << endl;
            cout << "Item Shape                         : " << Item_Shape << endl;
            cout << "Mattress Comfort                   : " << Mattress_Comfort << endl;
            cout << "Top Finish                         : " << Top_Finish << endl;
            cout << "Care Instructions                  : " << Care_Instructions << endl;
            cout << "Number of Shelves                  : " << No_of_Shelves << endl;
            cout << "Shipping Weight                    : " << Shipping_Weight << endl;
            cout << "Item Model Number                  : " << Item_Model_Number << endl;
            cout << "Manufacturer                       : " << Manufacturer << endl;
            cout << "Country of Origin                  : " << Country_Of_Origin << endl << endl;

        }
};

class Additional_Info
{
    private:

        std::string ASIN;
        std::string Customer_Reviews;
        std::string Best_Sellers_Rank;
        std::string Date_First_Available;
        std::string Manufacturer;
        std::string Packer;
        std::string Item_Weight;
        std::string Item_Dimensions;
        float Net_Quantity;
        std::string Generic_Name;

    public:

        Additional_Info(std::string _1, std::string _2, std::string _3, std::string _4 
                      , std::string _5, std::string _6, std::string _7, std::string _8 
                      , float _9, std::string _10)
                      {
                        ASIN = _1;
                        Customer_Reviews = _2;
                        Best_Sellers_Rank = _3;
                        Date_First_Available = _4;
                        Manufacturer = _5;
                        Packer = _6;
                        Item_Weight = _7;
                        Item_Dimensions = _8;
                        Net_Quantity = _9;
                        Generic_Name = _10;
                      }

        void show()
        {
            using std::cout;
            using std::endl;

            
            cout << "----------------------- A D D I T I O N A L   I N F O -----------------------" << endl << endl;
            
            cout << "ASIN                               : " << ASIN << endl;
            cout << "Customer Reviews                   : " << Customer_Reviews << endl;
            cout << "Best Sellers Rank                  : " << Best_Sellers_Rank << endl;
            cout << "Date First Available               : " << Date_First_Available << endl;
            cout << "Manufacturer                       : " << Manufacturer << endl;
            cout << "Packer                             : " << Packer << endl;
            cout << "Item Weight                        : " << Item_Weight << endl;
            cout << "Item Dimensions L x W x H          : " << Item_Dimensions << endl;
            cout << "Net Quantity                       : " << Net_Quantity << " Count" << endl;
            cout << "Generic Name                       : " << Generic_Name << endl << endl;
        }
};

int main(void)
{
      
    std::cout << "============================== M A T T R E S S ==============================" << std::endl << std::endl;

    Technical_Details Details("Grey", 'N', "DIY", "Patented SmartGRID","SmartGRID", "Polyester Blend", "10 Years Warrenty", "8 Inch", "78x60", '1'
                          , "Squishy Sample, Warranty Card, SmartGRID\n\t\t\t\t\t Ortho Pro Mattress", "Rectangular", "Firm", "Tight Top"
                          , "Always place the mattress on flat surface", '1', "38 Kilograms", "SmartGRID Ortho Pro", "The Sleep Company", "India");

                        Details.show();

    Additional_Info Info("BOBD95FMG9", "4.4 out of 5 stars", "#13,158 in Home & Kitchen (See Top 100 in Home &\n\t\t\t\t\t Kitchen)\n\t\t\t\t\t #49 in Mattresses (Home & Kitchen)"
                       , "29 August 2022", "The Sleep Company, 9811981911", "The Sleep Company Mumbai Maharashtra", "38 kg 300 g", "198.1 x 152.4 x 20 Centimeters", 1.00
                       , "Orthopedic Mattress");

                       Info.show();

    return (0);
}