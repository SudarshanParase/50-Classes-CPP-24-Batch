// Header File Inclusion
#include <iostream>
#include <string>

class Technical_Details
{
    private:
        std::string Brand;
        std::string Model;
        short int Capacity;
        short int Annual_Energy_Consumption;
        short int Food_Capacity;
        short int Freezer_Capacity;
        short int Bottle_Count;
        short int Volume_Capacity_Name;
        short int Noise_Level;
        std::string Installation_Type;
        std::string Part_Number;
        std::string Form_Factor;
        std::string Special_Features;
        std::string Colour;
        short int Voltage;
        short int Number_of_Drawers;
        std::string Defrost_System;
        std::string Door_Orientation;
        std::string Door_Material;
        std::string Shelf_Type;
        short int No_of_Shelves;
        std::string Certification;
        std::string Material;
        std::string Included_Components;
        char Batteries_Required;
        std::string Manufacturer;
        std::string Country_of_Origin;

    public:
        Technical_Details(std::string _1, std::string _2, short int _3, short int _4, short int _5
                        , short int _6, short int _7, short int _8, short int _9, std::string _10 
                        , std::string _11, std::string _12, std::string _13, std::string _14, short int _15
                        , short int _16, std::string _17, std::string _18, std::string _19, std::string _20
                        , short int _21, std::string _22, std::string _23, std::string _24, char _25 
                        , std::string _26, std::string _27)
                        {
                            Brand = _1;
                            Model = _2;
                            Capacity = _3;
                            Annual_Energy_Consumption = _4;
                            Food_Capacity = _5;
                            Freezer_Capacity = _6;
                            Bottle_Count = _7;
                            Volume_Capacity_Name = _8;
                            Noise_Level = _9;
                            Installation_Type = _10;
                            Part_Number = _11;
                            Form_Factor = _12;
                            Special_Features = _13;
                            Colour = _14;
                            Voltage = _15;
                            Number_of_Drawers = _16;
                            Defrost_System = _17;
                            Door_Orientation = _18;
                            Door_Material = _19;
                            Shelf_Type = _20;
                            No_of_Shelves = _21;
                            Certification = _22;
                            Material = _23;
                            Included_Components = _24;
                            Batteries_Required = _25;
                            Manufacturer = _26;
                            Country_of_Origin = _27;
                            
                        }
        
        void display()
        {
            
            std::cout << "--------------------- T E C H N I C A L   D E T A I L S -------------------------" << std::endl << std::endl;

            std::cout << "Brand                             : " << Brand << std::endl;
            std::cout << "Model                             : " << Model << std::endl;
            std::cout << "Capacity                          : " << Capacity << " Liters" << std::endl;
            std::cout << "Annual Energy Consumption         : " << Annual_Energy_Consumption << " Kilowatt Hours Per Year" << std::endl;
            std::cout << "Refrigerator Fresh Food Capacity  : " << Food_Capacity << " Litres" << std::endl;
            std::cout << "Freezer Capacity                  : " << Freezer_Capacity << " Litres" << std::endl;
            std::cout << "Bottle Count                      : " << Bottle_Count << std::endl;
            std::cout << "Volume Capacity Name              : " << Volume_Capacity_Name << std::endl;
            std::cout << "Noise Level                       : " << Noise_Level << " dB" << std::endl;
            std::cout << "Installation Type                 : " << Installation_Type << std::endl;
            std::cout << "Part Number                       : " << Part_Number << std::endl;
            std::cout << "Form Factor                       : " << Form_Factor << std::endl;
            std::cout << "Special Features                  : " << Special_Features << std::endl;
            std::cout << "Colour                            : " << Colour << std::endl;
            std::cout << "Voltage                           : " << Voltage << " Volts" << std::endl;
            std::cout << "Number of Drawers                 : " << Number_of_Drawers << std::endl;
            std::cout << "Defrost System                    : " << Defrost_System << std::endl;
            std::cout << "Door Orientation                  : " << Door_Orientation << std::endl;
            std::cout << "Door Material                     : " << Door_Material << std::endl;
            std::cout << "Shelf Type                        : " << Shelf_Type << std::endl;
            std::cout << "Number of Shelves                 : " << No_of_Shelves << std::endl;
            std::cout << "Certification                     : " << Certification << std::endl;
            std::cout << "Material                          : " << Material << std::endl;
            std::cout << "Included Components               : " << Included_Components << std::endl;
            std::cout << "Batteries Required                : " << Batteries_Required << std::endl;
            std::cout << "Manufacturer                      : " << Manufacturer << std::endl;
            std::cout << "Country of Origin                 : " << Country_of_Origin << std::endl << std::endl;
        };

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
        std::string Importer;
        short int Item_Weight;
        std::string Item_Dimensions;
        short int Net_Quantity;
        std::string Generic_Name;
        
    public:
        Additional_Info(std::string _1, std::string _2, std::string _3, std::string _4, std::string _5
                      , std::string _6, std::string _7, short int _8, std::string _9, short int _10
                      , std::string _11)
                      {
                        ASIN = _1;
                        Customer_Reviews = _2;
                        Best_Sellers_Rank = _3;
                        Date_First_Available = _4;
                        Manufacturer = _5;
                        Packer = _6;
                        Importer = _7;
                        Item_Weight = _8;
                        Item_Dimensions = _9;
                        Net_Quantity = _10;
                        Generic_Name = _11;

                      }

        void display()
        {
            
            std::cout << "----------------------- A D D I T I O N A L   I N F O ---------------------------" << std::endl << std::endl;

            std::cout << "ASIN                              : " << ASIN << std::endl;
            std::cout << "Best Sellers Rank                 : " << Best_Sellers_Rank << std::endl;
            std::cout << "Date First Available              : " << Date_First_Available << std::endl;
            std::cout << "Manufacturer                      : " << Manufacturer << std::endl;
            std::cout << "Packer                            : " << Packer << std::endl;
            std::cout << "Importer                          : " << Importer << std::endl;
            std::cout << "Item Weight                       : " << Item_Weight << " Kg" << std::endl;
            std::cout << "Item Dimensions L x W x H         : " << Item_Dimensions << std::endl;
            std::cout << "Net Quantity                      : " << Net_Quantity << " Count" << std::endl;
            std::cout << "Generic Name                      : " << Generic_Name << std::endl << std::endl;

        };

};

int main(void)
{

    std::cout << "========================== R E F R I G E R A T O R ==============================" << std::endl << std::endl;

    Technical_Details Details("Samsung", " RS76CG8003S9HL", 653, 547, 409, 244, 6, 653, 40, "Freestanding", "RS76CG8003S9HL", "Side By Side Refrigerator"
                            , "Energy Efficient,Inverter Compressor,\n\t\t\t\t\t Frost Free,Automatic Defrost, Low NOise, Adjustable\n\t\t\t\t\t Shelves, Large Capacity"
                            , "Silver", 230, 2, "Frost Free", "Reversible", "Stainless Steel", "Toughened Glass", 4, "Energy Star", "Stainless-Steel", " 1 Refrigerator, 1 User Manual, 1 Warranty Card"
                            , 'N', "Sansung India Electronics Limited", "India");

                            Details.display();

    Additional_Info Info("B0BQC4Y4TP", "4.1 out of 5 Stars", "#2,841 in Home & Kitchen (See Top 100 in Home & Kitchen)\n\t\t\t\t\t #18 in Refrigerators (Home & Kitchen)", "16 December 2022", "Samsung India Electronics Limited, Samsung\n\t\t\t\t\t India Electronics Pvt. Ltd. having its Registered Office at: 6th Floor,\n\t\t\t\t\t DLF Centre, Sansad Marg, New Delhi-110001"
                       , "Samsung India Electronics Pvt. Ltd.\n\t\t\t\t\t having its Registered Office at: 6th\n\t\t\t\t\t Floor, DLF Centre, Sansad Marg, New\n\t\t\t\t\t Delhi-110001", "Samsung India Electronics Pvt. Ltd.\n\t\t\t\t\t having its Registered Office at: 6th\n\t\t\t\t\t Floor, DLF Centre, Sansad Marg, New\n\t\t\t\t\t Delhi-110001", 100, " 71.6 x 91.2 x 178 Centimeters"
                       , 1, "Refrigerator");

                        Info.display();

    return (0);
}
