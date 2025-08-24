// Header FIle Inclusion
#include <iostream>
#include <string>

class Basic_Info
{
    private:

        std::string Brand;
        std::string Manufacturer;
        std::string Country_of_Origin;

    public:
        Basic_Info(std::string _1, std::string _2, std::string _3)
        {
            Brand = _1;
            Manufacturer = _2;
            Country_of_Origin = _3;
        }

        void display()
        {
            std::cout << "-------------------- B A S I C   I N F O ----------------------" << std::endl << std::endl;

            std::cout << "Brand                              : " << Brand << std::endl;
            std::cout << "Manufacturer                       : " << Manufacturer << std::endl;
            std::cout << "Country of Origin                  : " << Country_of_Origin << std::endl << std::endl;
        }
};

class Technical_Details
{
    private:
        std::string Series;
        float Item_Height;
        float Item_Width;
        std::string Resolution;
        std::string Product_Dimensions;
        std::string Item_Model_Number;
        short int Memory_Clock_Speed;
        std::string Graphics_Coprocessor;
        std::string Graphics_Chipset_Brand;
        std::string Graphics_Card_Description;
        std::string Graphics_RAM_Type;
        short int Graphics_Card_Ram_Size;
        std::string Graphics_Card_Interface;
        std::string Included_Components;
        std::string Item_Weight;

    public:
        Technical_Details(std::string _1, float _2, float _3, std::string _4, std::string _5
                        , std::string _6, short int _7, std::string _8, std::string _9, std::string _10 
                        , std::string _11, short int _12, std::string _13, std::string _14, std::string _15)
        {
            Series = _1;
            Item_Height = _2;
            Item_Width = _3;
            Resolution = _4;
            Product_Dimensions = _5;
            Item_Model_Number = _6;
            Memory_Clock_Speed = _7;
            Graphics_Coprocessor = _8;
            Graphics_Chipset_Brand = _9;
            Graphics_Card_Description = _10;
            Graphics_RAM_Type = _11;
            Graphics_Card_Ram_Size = _12;
            Graphics_Card_Interface = _13;
            Included_Components = _14;
            Item_Weight = _15;
        }

        void display()
        {
            // Using std:: -- in display() function
            using std::cout;
            using std::endl;

            
            cout << "------------- T E C H N I C A L   D E T A I L S ---------------" << endl << endl;
            
            cout << "Series                             : " << Series << endl;
            cout << "Item Height                        : " << Item_Height << " Inches" << endl;
            cout << "Item Width                         : " << Item_Width << " Inches" << endl;
            cout << "Resolution                         : " << Resolution << endl;
            cout << "Product Dimensions                 : " << Product_Dimensions << endl;
            cout << "Item Model Number                  : " << Item_Model_Number << endl;
            cout << "Memory Clock Speed                 : " << Memory_Clock_Speed << endl;
            cout << "Graphics Coprocessor               : " << Graphics_Coprocessor << endl;
            cout << "Graphics Chipset Brand             : " << Graphics_Chipset_Brand << endl;
            cout << "Graphics Card Description          : " << Graphics_Card_Description << endl;
            cout << "Graphics RAM Type                  : " << Graphics_RAM_Type << endl;
            cout << "Graphics Card Ram Size             : " << Graphics_Card_Ram_Size << " GB" << endl;
            cout << "Graphics Card Interface            : " << Graphics_Card_Interface << endl;
            cout << "Included Components                : " << Included_Components << endl;
            cout << "Item Weight                        : " << Item_Weight << endl  << endl;
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
        std::string Item_Dimensions;
        std::string Generic_Name;

    public:
        Additional_Info(std::string _1, std::string _2, std::string _3, std::string _4
                      , std::string _5, std::string _6, std::string _7, std::string _8)
        {
           ASIN = _1;
           Customer_Reviews = _2;
           Best_Sellers_Rank = _3;
           Date_First_Available = _4;
           Packer = _5;
           Importer = _6;
           Item_Dimensions = _7;
           Generic_Name = _8;
            
        }

        void display()
        {
            using std::cout;
            using std::endl;

            cout << "----------------A D D I T I O N A L   I N F O -----------------" << endl << endl;

            cout << "ASIN                               : " << ASIN << endl;
            cout << "Customer Reviews                   : " << Customer_Reviews << endl;
            cout << "Best Sellers Rank                  : " << Best_Sellers_Rank << endl;
            cout << "Date First Available               : " << Date_First_Available << endl;
            cout << "Packer                             : " << Packer << endl;
            cout << "Importer                           : " << Importer << endl;
            cout << "Item Dimensions L x W x H          : " << Item_Dimensions << endl;
            cout << "Generic Name                       : " << Generic_Name << endl << endl;
        }

};

int main(void)
{
    std::cout << "=============== N V I D I A   R T X   5 0 9 0 =================" << std::endl << std::endl;
    
    Basic_Info Info("GIGABYTE", "GIGABYTE, Gigabyte", "China");

    Info.display();

    Technical_Details Details("GV-N5090WF3OC-32GD", 0.1, 5.9, "7680x4320 Pixels", "34.19 x 14.99 x 0.25 cm; 1.91 kg", "GV-N5090WF3OC-32GD", 2209, "NVIDIA GeForce RTX 5090"
                            , "GIGABYTE", "Dedicated", "GDDR6X", 32, "PCI-Express x16", "GRAPHICS CARD, USER MANUAL", "1 kg 910 g");

    Details.display();

    Additional_Info A_Info("B0DT7GMXHB", "2.7 out of 5 stars", "#280,712 in Computers &\n\t\t\t\t\t Accessories (See Top 100 in\n\t\t\t\t\t Computers & Accessories)\n\t\t\t\t\t #1,040 in Graphics Cards", "30 January 2025", "Gigabyte", "Gigabyte"
                         , " 34.2 x 15 x 0.3 Centimeters", "Graphic Card");

    A_Info.display();


    return (0);
}