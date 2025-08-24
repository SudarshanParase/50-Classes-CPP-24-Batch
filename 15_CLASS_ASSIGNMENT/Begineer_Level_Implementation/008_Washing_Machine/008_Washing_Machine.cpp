// Header file Inclusion
#include <iostream>
#include <string>

class Technical_Details
{
    private:
        std::string Brand;                      // 1
        std::string Model;                      // 2
        short int Energy_Efficiency;
        short int Capacity;                     // 4
        float Water_Consumption;
        float Annual_Energy_Consumption;        // 6
        short int Maximum_Rotational_Speed;
        short int Noise_Level;
        std::string Installation_Type;
        std::string Part_Number;
        std::string Form_Factor;
        std::string Special_Features;
        std::string Colour;
        std::string Control_Console;
        short int No_of_Standard_Cycles;
        std::string Access_Location;
        short int Voltage;
        short int Wattage;
        std::string Fuel_Type;
        std::string Connector_Type;
        std::string Certification;
        std::string Material;
        std::string Included_Components;
        char Batteries_Included;
        char Batteries_Required;
        std::string Manufacturer;
        std::string Country_of_Origin;
    
    public:
        Technical_Details(std::string _1, std::string _2, short int _3, short int _4, float _5 
                        , float _6, short int _7, short int _8, std::string _9, std::string _10 
                        , std::string _11, std::string _12, std::string _13, std::string _14
                        , short int _15, std::string _16, short int _17, short int _18, std::string _19 
                        , std::string _20, std::string _21, std::string _22, std::string _23
                        , char _24, char _25, std::string _26, std::string _27)
        {
            Brand = _1;
            Model = _2;
            Energy_Efficiency = _3;
            Capacity = _4;
            Water_Consumption = _5;
            Annual_Energy_Consumption = _6;
            Maximum_Rotational_Speed = _7;
            Noise_Level = _8;
            Installation_Type = _9;
            Part_Number = _10;
            Form_Factor = _11;
            Special_Features = _12;
            Colour = _13;
            Control_Console = _14;
            No_of_Standard_Cycles = _15;
            Access_Location = _16;
            Voltage = _17;
            Wattage = _18;
            Fuel_Type = _19;
            Connector_Type = _20;
            Certification = _21;
            Material = _22;
            Included_Components = _23;
            Batteries_Included = _24;
            Batteries_Required = _25;
            Manufacturer = _26;
            Country_of_Origin = _27;
        };

        void display()
        {
            std::cout << "==================== W A S H I N G   M A C H I N E =========================" << std::endl << std::endl;

            std::cout << "------------------- T E C H N I C A L  D E T A I L S -----------------------" << std::endl << std::endl;
            
            std::cout << "Brand                                 : " << Brand << std::endl;
            std::cout << "Model                                 : " << Model << std::endl;
            std::cout << "Energy Efficiency                     : " << Energy_Efficiency << " Star" << std::endl;
            std::cout << "Capacity                              : " << Capacity << " Kilograms" << std::endl;
            std::cout << "Water Consumption                     : " << Water_Consumption << " Kilograms" << std::endl;
            std::cout << "Annual Energy Consumption             : " << Annual_Energy_Consumption << " Watts per Kilogram" << std::endl;
            std::cout << "Maximum Rotational Speed              : " << Maximum_Rotational_Speed << " RPM" << std::endl;
            std::cout << "Noise Level                           : " << Noise_Level << " dB" << std::endl;
            std::cout << "Installation Type                     : " << Installation_Type << std::endl;
            std::cout << "Part Number                           : " << Part_Number << std::endl;
            std::cout << "Form Factor                           : " << Form_Factor << std::endl;
            std::cout << "Special Features                      : " << Special_Features << std::endl;
            std::cout << "Colour                                : " << Colour << std::endl;
            std::cout << "Control Console                       : " << Control_Console << std::endl;
            std::cout << "Nubmer of Standard Cycles             : " << No_of_Standard_Cycles << std::endl;
            std::cout << "Access Location                       : " << Access_Location << std::endl;
            std::cout << "Voltage                               : " << Voltage << " Volts" << std::endl;
            std::cout << "Wattage                               : " << Wattage << " Watts" << std::endl;
            std::cout << "Fuel Type                             : " << Fuel_Type << std::endl;
            std::cout << "Connector Type                        : " << Connector_Type << std::endl;
            std::cout << "Certification                         : " << Certification << std:: endl;
            std::cout << "Material                              : " << Material << std::endl;
            std::cout << "Included Components                   : " << Included_Components << std::endl;
            std::cout << "Batteries Included                    : " << Batteries_Included << std::endl;
            std::cout << "Batteries Required                    : " << Batteries_Required << std::endl;
            std::cout << "Manufacturer                          : " << Manufacturer << std::endl;
            std::cout << "Country of Origin                     : " << Country_of_Origin << std::endl;
        };
};

class Additional_Info
{
    private:
        std::string ASIN;
        float Customer_Reviews;
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
        Additional_Info(std::string _1, float _2, std::string _3, std::string _4, std::string _5
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
        };

        void display()
        {
             std::cout << "-------------------- A D D I T I O N A L  I N F O -------------------------" << std::endl << std::endl;    

            std::cout << "ASIN                                  : " << ASIN << std::endl;
            std::cout << "Customer Reviews                      : " << Customer_Reviews << std::endl;
            std::cout << "Best Sellers Rank                     : " << Best_Sellers_Rank << std::endl;
            std::cout << "Date First Available                  : " << Date_First_Available << std::endl;
            std::cout << "Manufacturer                          : " << Manufacturer << std::endl;
            std::cout << "Packer                                : " << Packer << std::endl;
            std::cout << "Importer                              : " << Importer << std::endl;
            std::cout << "Item Weight                           : " << Item_Weight << " Kg" << std::endl;
            std::cout << "Item Dimensions L x W x H             : " << Item_Dimensions << std::endl;
            std::cout << "Net Quantity                          : " << Net_Quantity << " Piece" << std::endl;
            std::cout << "Generic Name                          : " << Generic_Name << std::endl;
        };
};

int main(void)
{
    Technical_Details Details("LG", "FHB1208Z4M", 5, 8, 8.2, 0.07, 1200, 54, "Freestanding", "4l2F1153", "Front-Loading"
                            , "Inverter, Child Lock, Hygiene Steam, Smart\n\t\t\t\t\t Connectivity, LED Display", "Middle Black", "Touch", 10, "Front Load"
                            , 230, 2100, "Electric", "WWater inlet & Drain", "ENergy Star", "Steel", "Power Cord, 1U Front Load Fully Automatic\n\t\t\t\t\t Washing machine, 1U Spanner, 1U Cover Antirat, 1U Inlet Hose,\n\t\t\t\t\t 1U Owners Manual"
                            , 'N', 'N', "LG Electronics India Pvt. Ltd.", "India");

                            Details.display();

    Additional_Info Info("B0DD45WVCM", 4.0, "#459 in Home & Kitchen (See Top 100 in Home & Kitchen)\n\t\t\t\t\t #2 in Clothes Washing Machines", "14 August 2024"
                       , "LG Electronics India Pvt. Ltd., Plot no. A-5, MIDC,\n\t\t\t\t\t Ranjangaon, Tal-Shirur Udyog Vihar, Pune (Maharashtra)\n\t\t\t\t\t PIN- 412220 | E-mail: serviceindia@lge.com | TEL: 08069379999,\n\t\t\t\t\t WhatsApp : 9711709999"
                       , "LG Electronics India Pvt. Ltd., Plot no. A-5, MIDC,\n\t\t\t\t\t Ranjangaon, Tal-Shirur Udyog Vihar, Pune (Maharashtra)\n\t\t\t\t\t PIN- 412220 | E-mail: serviceindia@lge.com | TEL: 08069379999,\n\t\t\t\t\t WhatsApp : 9711709999"
                       , "A-24/6, Mohan Cooperative Industrial Estate, Mathura\n\t\t\t\t\t Road, New Delhi-110044", 57, "55 x 60 x 85 Centimeters", 1, "Fully-Automatic Front Load Washing Machines");

                       Info.display();
    return (0);
}