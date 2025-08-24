// Header File Inclusion
#include <iostream>
#include <string>

class Techincal_Details
{
    private:
        std::string Noise_Control;
        int Frequency_Response;
        short int Sensitivity;
        float Headphones_Jack;
        std::string Model_Name;
        std::string Connectivity_Technology;
        std::string Communication_Technology;
        std::string Included_Components;
        std::string Age_Range;
        std::string Material;
        std::string Specific_Uses_For_Product;
        short int Charging_Time;
        std::string Recommended_Uses;
        std::string Compatible_Devices;
        std::string Theme;
        std::string Cartoon_Character;
        std::string Control_Type;
        std::string Cable_Feature_1;
        float Item_Weight_1;
        char Water_Resistance_Level;
        std::string Frequency_Range;
        char Net_Quantity;
        std::string Style;
        std::string Control_Method;
        char No_of_Items;
        float Cable_Length;
        short int Battery_Life;
        std::string Audio_Driver_Type;
        short int Bluetooth_Range;
        float Bluetooth_Version;
        short int Audio_Driver_Size;
        std::string Earpiece_Shape;
        char Is_Autographed;
        short int Series_Number;
        std::string UPC;
        std::string Manufacturer;
        std::string Model;
        std::string Model_Year;
        std::string Batteries;
        std::string Item_Model_Number;
        std::string Hardware_Platform;
        std::string Special_Features;
        std::string Microphone_Format;
        char Batteries_Included;
        char Batteries_Required;
        std::string Battery_Cell_Composition;
        std::string Cable_Feature_2;
        char Contain_Liquid;
        char Rechargeable_Battery;
        short int Item_Weight_2;



    public:
        Techincal_Details( std::string _1, int _2, short int _3, float _4, std::string _5
                         , std::string _6, std::string _7, std::string _8, std::string _9, std::string _10 
                         , std::string _11, short int _12, std::string _13, std::string _14, std::string _15 
                         , std::string _16, std::string _17, std::string _18, float _19, char _20
                         , std::string _21, char _22, std::string _23, std::string _24, char _25
                         , float _26, short int _27, std::string _28, short int _29, float _30
                         , short int _31, std::string _32, char _33, short int _34, std::string _35
                         , std::string _36, std::string _37, std::string _38, std::string _39, std::string _40 
                         , std::string _41, std::string _42, std::string _43, char _44, char _45 
                         , std::string _46, std::string _47, char _48, char _49, short int _50)
        {
            Noise_Control = _1;
            Frequency_Response = _2;
            Sensitivity = _3;
            Headphones_Jack = _4;
            Model_Name = _5;
            Connectivity_Technology = _6;
            Communication_Technology = _7;
            Included_Components = _8;
            Age_Range = _9;
            Material = _10;
            Specific_Uses_For_Product = _11;
            Charging_Time = _12;
            Recommended_Uses = _13;
            Compatible_Devices = _14;
            Theme = _15;
            Cartoon_Character = _16;
            Control_Type = _17;
            Cable_Feature_1 = _18;
            Item_Weight_1 = _19;
            Water_Resistance_Level = _20;
            Frequency_Range = _21;
            Net_Quantity = _22;
            Style = _23;
            Control_Method = _24;
            No_of_Items = _25;
            Cable_Length = _26;
            Battery_Life = _27;
            Audio_Driver_Type = _28;
            Bluetooth_Range = _29;
            Bluetooth_Version = _30;
            Audio_Driver_Size = _31;
            Earpiece_Shape = _32;
            Is_Autographed = _33;
            Series_Number = _34;
            UPC = _35;
            Manufacturer = _36;
            Model = _37;
            Model_Year = _38;
            Batteries = _39;
            Item_Model_Number = _40;
            Hardware_Platform = _41;
            Special_Features = _42;
            Microphone_Format = _43;
            Batteries_Included = _44;
            Batteries_Required = _45;
            Battery_Cell_Composition = _46;
            Cable_Feature_2 = _47;
            Contain_Liquid = _48;
            Rechargeable_Battery = _49;
            Item_Weight_2 = _50;

        }

        void display()
        {
            
            std::cout << "-------------------------- T E C H I N C A L   D E T A I L S ------------------------" << std::endl << std::endl;
            
            std::cout << "Noise Control                             : " << std::endl;
            std::cout << "Frequency Response                        : " << Frequency_Response << " Hz" << std::endl;
            std::cout << "Sensitivity                               : " << Sensitivity << " dB" << std::endl;
            std::cout << "Headphones Jack                           : " << Headphones_Jack << " mm Jack" << std::endl;
            std::cout << "Model Name                                : " << Model_Name << std::endl;
            std::cout << "Connectivity Technology                   : " << Connectivity_Technology << std::endl;
            std::cout << "WireLess Communication Technology         : " << Communication_Technology << std::endl;
            std::cout << "Included Components                       : " << Included_Components << std::endl;
            std::cout << "Age Range (Description)                   : " << Age_Range << std::endl;
            std::cout << "Material                                  : " << Material << std::endl;
            std::cout << "Specific Uses For Product                 : " << Specific_Uses_For_Product << std::endl;
            std::cout << "Charging Time                             : " << Charging_Time << " Hr" << std::endl;
            std::cout << "Recommended Uses For Product              : " << Recommended_Uses << std::endl;
            std::cout << "Compatible Devices                        : " << Compatible_Devices << std::endl;
            std::cout << "Theme                                     : " << Theme << std::endl;
            std::cout << "Cartoon Character                         : " << Cartoon_Character << std::endl;
            std::cout << "Control Type                              : " << Control_Type << std::endl;
            std::cout << "Cable Feature                             : " << Cable_Feature_1 << std::endl;
            std::cout << "Item Weight                               : " << Item_Weight_1 << " Ounces" << std::endl;
            std::cout << "Water Resistance Level                    : " << Water_Resistance_Level << std::endl;
            std::cout << "Frequency Range                           : " << Frequency_Range << std::endl;
            std::cout << "Net Quantity                              : " << Net_Quantity << " Count" << std::endl;
            std::cout << "Style                                     : " << Style << std::endl;
            std::cout << "Control Method                            : " << Control_Method << std::endl;
            std::cout << "Number of Items                           : " << No_of_Items << std::endl;
            std::cout << "Cable Length                              : " << Cable_Length << " Meters" << std::endl;
            std::cout << "Battery Life                              : " << Battery_Life << " Hrs" << std::endl;
            std::cout << "Audio Driver Types                        : " << Audio_Driver_Type << std::endl;
            std::cout << "Bluetooth Range                           : " << Bluetooth_Range << " Meters" << std::endl;
            std::cout << "Bluetooth Version                         : " << Bluetooth_Version << std::endl;
            std::cout << "Audio Driver Size                         : " << Audio_Driver_Size << " Millimeters" << std::endl;
            std::cout << "Earpiece Shape                            : " << Earpiece_Shape << std::endl;
            std::cout << "Is Autographed                            : " << Is_Autographed << std::endl;
            std::cout << "Series Number                             : " << Series_Number << std::endl;
            std::cout << "UPC                                       : " << UPC << std::endl;
            std::cout << "Manufacturer                              : " << Manufacturer << std::endl;
            std::cout << "Model                                     : " << Model << std::endl;
            std::cout << "Model Year                                : " << Model_Year << std::endl;
            std::cout << "Batteries                                 : " << Batteries << std::endl;
            std::cout << "Item Model Number                         : " << Item_Model_Number << std::endl;
            std::cout << "Hardware Platform                         : " << Hardware_Platform << std::endl;
            std::cout << "Special Features                          : " << Special_Features << std::endl;
            std::cout << "Microphone Format                         : " << Microphone_Format << std::endl;
            std::cout << "Batteries Included                        : " << Batteries_Included << std::endl;
            std::cout << "Batteries Required                        : " << Batteries_Required << std::endl;
            std::cout << "Battery Cell Composition                  : " << Battery_Cell_Composition << std::endl;
            std::cout << "Cable Feature                             : " << Cable_Feature_2 << std::endl;
            std::cout << "Does it contain liquid?                   : " << Contain_Liquid << std::endl;
            std::cout << "Includes Rechargeable Battery             : " << Rechargeable_Battery << std::endl;
            std::cout << "Item Weight                               : " << Item_Weight_2 << " g" << std::endl << std::endl;
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
        Additional_Info(std::string _1, std::string _2, std::string _3, std::string _4, std::string _5
                      , std::string _6, std::string _7, std::string _8)
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

        void display()
        {
            
            std::cout << "--------------------------- A D D I T I O N A L   I N F O ---------------------------" << std::endl << std::endl;

            std::cout << "ASIN                                      : " << ASIN << std::endl;
            std::cout << "Customer Reviews                          : " << Customer_Reviews << std::endl;
            std::cout << "Best Sellers Rank                         : " << Best_Sellers_Rank << std::endl;
            std::cout << "Date First Available                      : " << Date_First_Available << std::endl;
            std::cout << "Packer                                    : " << Packer << std::endl;
            std::cout << "Importer                                  : " << Importer << std::endl;
            std::cout << "Net Quantity                              : " << Net_Quantity << std::endl;
            std::cout << "Generic Name                              : " << Generic_Name << std::endl << std::endl;

        }
};

int main(void)
{
    std::cout << "============================ S O N Y   H E A D P H O N E ============================" << std::endl << std::endl;

    Techincal_Details Details("Sound Isolation", 20000, 108, 3.5, "WH-CH720N", "Wireless", "Bluetooth", "Headphone Connection Cable,\n\t\t\t\t\t\t USB Type-C cable, Reference\n\t\t\t\t\t\t Guide and 1U Headphone", "Adult"
                            , "Faux Leather, Plastic", "Personal", 3, " Entertainment, Calling, Outdoor,\n\t\t\t\t\t\t Recording, Exercising, Running,\n\t\t\t\t\t\t Audio Monitoring, Travelling,\n\t\t\t\t\t\t Listening Music"
                            , "Cellphones, MUsic Production\n\t\t\t\t\t\t Equipment, Laptops, Desktops", "Music", "CH Series", "Media Control", "Without Cable", 3.5, 'N', "7 Hz - 20000 Hz", '1', "WH-CH720/Black", "Voice"
                            , '1', 1.2, 35, "Dynamic Driver", 10, 5.2, 30, "Circle", 'N', 720, "027242925397", " Sony Corporation, sony\n\t\t\t\t\t\t corporation, 1-7-1, konan, minato\n\t\t\t\t\t\t ku, tokyo, 108-0075, japan"
                            , "WHCH720N/B", "2023", "1 Lithium Polymer Batteries\n\t\t\t\t\t\t required.(included)", "WHCH720N/B", "Smartphone", "Foldable", "Built-in", 'Y', 'Y', "Lithium Ion", "Withougt Cable", 'N', 'Y', 99);

    Details.display();

    Additional_Info Info("BOBS1QCFHX", "4.2 out of 5 stars", "#1,548 in Electronics (See Top 100 in\n\t\t\t\t\t\t Electronics)\n\t\t\t\t\t\t #13 in Over-Ear Headphones", "9 March 2023", "sony corporation, 1-7-1, konan,\n\t\t\t\t\t\t minato-ku, tokyo, 108-0075, japan"
                       , "sony india private limited, a-18,\n\t\t\t\t\t\t mohan co-operative industrial\n\t\t\t\t\t\t estate, mathura road, new delhi\n\t\t\t\t\t\t 110044, india , Customer Care\n\t\t\t\t\t\t Number : 080 6500 6500, email:\n\t\t\t\t\t\t sonyindia.care@ap.sony.com"
                       , "1 Count", "Headphones" );
    
    Info.display();
    return (0);
}