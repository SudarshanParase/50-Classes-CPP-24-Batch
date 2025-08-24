// Header File Inclusion
#include <iostream>
#include <string>

class Technical_Details
{
    private:

        std::string Material;
        std::string Model_Name;
        std::string Speaker_Type;
        std::string Special_Feature;
        std::string Uses_For_Product;           // 5
        std::string Compatible_Devices;
        short int Subwoofer_Diameter;
        std::string Controller_Type;
        float Channel_Configuration;
        std::string Colour;                     // 10
        std::string Included_Components;
        std::string Product_Dimensions;
        std::string Age_Range;
        float Item_Weight;
        char Is_Waterproof;                     // 15
        char No_of_Items;
        std::string Control_Method;
        std::string Wireless_Technology;
        float Speaker_Size;
        std::string Power_Source;               // 20
        short int Signal_To_Noise;
        char Tweeter_Diameter;
        std::string Water_Resistance_Level;
        std::string No_of_batteries;
        std::string Audio_Driver_Type;          // 25
        std::string Subwoofer_C_Technology;
        std::string Connectivity_Protocol;
        char Includes_MP3_Player;
        std::string Manufacturer;
        int Model;                              // 30
        std::string Batteries;
        std::string Audio_Input_Compatible;
        short int S_Nominal_Output_Power;       // 33
        std::string S_Amplification_Type;
        short int Audio_Wattage;                // 35
        short int Voltage;
        short int Wattage;        
        char Batteries_Included;
        char Batteries_Required;
        std::string Battery_Cell_Composition;   // 40
        char Includes_Rechargeable_Battery;
        std::string Country_Of_Origin;
        std::string Net_Quantity;


    public:

        Technical_Details(std::string _1, std::string _2, std::string _3, std::string _4, std::string _5 
                        , std::string _6, short int _7, std::string _8, float _9, std::string _10  
                        , std::string _11, std::string _12, std::string _13, float _14, char _15 
                        , char _16, std::string _17, std::string _18, float _19, std::string _20 
                        , short int _21, char _22, std::string _23, std::string _24, std::string _25 
                        , std::string _26, std::string _27, char _28, std::string _29, int _30 
                        , std::string _31, std::string _32,  short int _33, std::string _34, short int _35 
                        , short int _36, short int _37, char _38, char _39, std::string _40 
                        , char _41, std::string _42, std::string _43)
        {
            Material = _1;
            Model_Name = _2;
            Speaker_Type = _3;
            Special_Feature = _4;
            Uses_For_Product = _5;
            Compatible_Devices = _6;
            Subwoofer_Diameter = _7;
            Controller_Type = _8;
            Channel_Configuration = _9;
            Colour = _10;
            Included_Components = _11;
            Product_Dimensions = _12;
            Age_Range = _13;
            Item_Weight = _14;
            Is_Waterproof = _15;
            No_of_Items = _16;
            Control_Method = _17;
            Wireless_Technology = _18;
            Speaker_Size = _19;
            Power_Source = _20;
            Signal_To_Noise = _21;
            Tweeter_Diameter = _22;
            Water_Resistance_Level = _23;
            No_of_batteries = _24;
            Audio_Driver_Type = _25;
            Subwoofer_C_Technology = _26;
            Connectivity_Protocol = _27;
            Includes_MP3_Player = _28;
            Manufacturer = _29;
            Model = _30;
            Batteries = _31;
            Audio_Input_Compatible = _32;
            S_Nominal_Output_Power = _33;
            S_Amplification_Type = _34;
            Audio_Wattage = _35;
            Voltage = _36;
            Wattage = _37;
            Batteries_Included = _38;
            Batteries_Required = _39;
            Battery_Cell_Composition = _40;
            Includes_Rechargeable_Battery = _41;
            Country_Of_Origin = _42;
            Net_Quantity = _43;
            

        }

        void show()
        {
            using std::cout;
            using std::endl;

            cout << "----------------------- T E C H N I C A L   I N F O -----------------------" << endl << endl;

            cout << "Material                               : " << Material << endl;
            cout << "Model Name                             : " << Model_Name << endl;
            cout << "Speaker Type                           : " << Speaker_Type << endl;
            cout << " Special Feature                       : " << Special_Feature << endl;
            cout << "Recommended Uses For Product           : " << Uses_For_Product << endl;
            cout << "Compatible Devices                     : " << Compatible_Devices << endl;
            cout << "Subwoofer Diameter                     : " << Subwoofer_Diameter << "Centimetres" << endl;
            cout << "Controller Type                        : " << Controller_Type << endl;
            cout << "Surround Sound Channel Configuration   : " << Channel_Configuration << endl;
            cout << "Colour                                 : " << Colour << endl;
            cout << "Included Components                    : " << Included_Components << endl;
            cout << "Product Dimensions                     : " << Product_Dimensions << endl;
            cout << "Age Range (Description)                : " << Age_Range << endl;
            cout << "Item Weight                            : " << Item_Weight << " Kg" << endl;
            cout << "Number of Items                        : " << No_of_Items << endl;
            cout << "Control Method                         : " << Control_Method << endl;
            cout << "Wireless Communication Technology      : " << Wireless_Technology << endl;
            cout << "Speaker Size                           : " << Speaker_Size << " Inches" << endl;
            cout << "Power Source                           : " << Power_Source << endl;
            cout << "Signal-to-Noise Ratio                  : " << Signal_To_Noise << " dB" << endl;
            cout << "Tweeter Diameter                       : " << Tweeter_Diameter << endl;
            cout << "Water Resistance Level                 : " << Water_Resistance_Level << endl;
            cout << "Number of Batteries                    : " << No_of_batteries << endl;
            cout << "Audio Driver Type                      : " << Audio_Driver_Type << endl;
            cout << "Subwoofer Connectivity Technology      : " << Subwoofer_C_Technology << endl;
            cout << "Connectivity Protocol                  : " << Connectivity_Protocol << endl;
            cout << "Includes MP3 player?                   : " << Includes_MP3_Player << endl;
            cout << "Manufacturer                           : " << Manufacturer << endl;
            cout << "Model                                  : " << Model << endl;
            cout << "Batteries                              : " << Batteries << endl;
            cout << "Audio I/P Compatible with the item     : " << Audio_Input_Compatible << endl;
            cout << "Speakers Nominal Output Power          : " << S_Nominal_Output_Power << " Watts" << endl;
            cout << "Speaker Amplification Type             : " << S_Amplification_Type << endl;
            cout << "Audio Wattage                          : " << Audio_Wattage << " Watts" << endl;
            cout << "Voltage                                : " << Voltage << " Volts" << endl;
            cout << "Wattage                                : " << Wattage << " Watts" << endl;
            cout << "Batteries Included                     : " << Batteries_Included << endl;
            cout << "Batteries Required                     : " << Batteries_Required << endl;
            cout << "Battery Cell Composition               : " << Battery_Cell_Composition << endl;
            cout << "Includes Rechargeable Battery          : " << Includes_Rechargeable_Battery << endl;
            cout << "Country of Origin                      : " << Country_Of_Origin << endl;
            cout << "Item Weight                            : " << Item_Weight << endl << endl;

        }
};

class Additional_Information
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

        Additional_Information(std::string _1, std::string _2, std::string _3, std::string _4 
                             , std::string _5, std::string _6, std::string _7, std::string _8)
        {
            ASIN = _1;
            Customer_Reviews = _2;
            Best_Sellers_Rank = _3;
            Date_First_Available = _4;
            Packer = _5;
            Importer = _6;
            Net_Quantity = _7;
            Generic_Name = _8;
        }

        void show()
        {
            using std::cout;
            using std::endl;

            cout << "--------------------- A D D I T I O N A L   I N F O ----------------------" << endl << endl;

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
     
    std::cout << "===================== M A R S H A L L   S P E A K E R =====================" << std::endl << std::endl;

    Technical_Details Details("Plastic", "Woburn III", "Wired Speaker", "Wireless, Bluetooth", "Tablets, For Televisioins, For Smartphones or\n\t\t\t\t\t Tablets", "Television, Tablet, Smartphone", 40, "App Control", 5.0, "Black"
                    , "Woburn III speaker, User manual and legal and\n\t\t\t\t\t safety information, Mains Lead", " 40D x 20.3W x 31.7H Centimeters", "Adult", 7.4, 'Y', '1', "App", "Bluetooth", 5.25, "ac", 100, '1', "Waterproof"
                    , "1 Lithium Polymer", "Dynamic Driver", "Wireless", "Bluetooth", 'N', " Marshall, Marshall, ZOUND INDUSTRIES\n\t\t\t\t\t INTERNATIONAL AB,WAREHOUSE\n\t\t\t\t\t 305,QIANHAIWAN FREE TRADE PORT AREA,53"
                    , 1002583, "1 Lithium Polymer Batteries Required.", "Auxiliary",  90, "Active", 90, 240, 150, 'N', 'N', "Lithium Polymer", 'N', "China", "1 Count");

                    Details.show();


    Additional_Information Info("B09GYQVJ3F", "4.4 out of 5 stars", " #50,099 in Electronics (See Top 100 in Electronics)\n\t\t\t\t\t #450 in Bluetooth Speakers", "20 December 2022", " Luxury Personified LLP,Plot number 38,Sector\n\t\t\t\t\t 20A,faridabad-121001,haryana- 121045"
                              , " Luxury Personified LLP,Plot number 38,Sector\n\t\t\t\t\t 20A,faridabad-121001,haryana- 121045", "1 Count", "Speaker");


                              Info.show();
    return (0);
}