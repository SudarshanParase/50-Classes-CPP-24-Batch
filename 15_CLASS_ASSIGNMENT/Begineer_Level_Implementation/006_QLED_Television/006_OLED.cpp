// Header file inclusion
#include <iostream>
#include <string>

// Base class: Basic TV details
class TV_Details_Base 
{
    protected:
        std::string Brand;                          // 1
        std::string Manufacturer;                   // 2
        std::string Model;                          // 3
        std::string Model_Name;                     // 4
        int Model_Year;                             // 5
        std::string Product_Dimensions;             // 6
        std::string Item_Model_No;                  // 7
        short int Memory_Storage_Capacity;          // 8
        short int Ram_Memory_Installed_Size;        // 9
        std::string Operating_System;               // 10
        std::string Hardware_Interface;             // 11
        std::string Graphics_Coprocessor;           // 12
        std::string Tuner_Technology;               // 13
        short int Response_Time;                    // 14
        short int Resolution;                       // 15
        std::string Special_Features;               // 16
        std::string Mounting_Hardware;              // 17
        short int No_of_Item;                       // 18
        std::string Remote_Control_Description;     // 19
        std::string Remote_Control_Technology;      // 20
        std::string Display_Tech;                   // 21
        short int Display_Size;                     // 22
        std::string Display_Type;                   // 23
        char Colour_Screen;                         // 24
        short int Viewing_Angle;                    // 25
        std::string Image_Aspect_Ratio;             // 26
        std::string Image_Brightness;               // 27
        std::string Supported_Image_Types;          // 28
        std::string Screen_Resolution;              // 29
        std::string Resolution_Pixels;              // 30
        std::string Audio_Input;                    // 31
        std::string Audio_Output_Mode;              // 32
        std::string Supported_Audio_Formats;        // 33
        std::string Speaker_Surround_Sound;         // 34
        short int Audio_Wattage;                    // 35
        short int Voltage;                          // 36
        short int Wattage;                          // 37
        std::string Power_Source;                   // 38
        char Batteries_Included;                    // 39
        char Batteries_Required;                    // 40
        short int Refresh_Rate;                     // 41
        short int Total_USB_Ports;                  // 42
        std::string Connector_Type;                 // 43
        short int Max_Operating_Distance;           // 44
        std::string Mounting_Type;                  // 45
        std::string Media_Format;                   // 46
        char Includes_Remote;                       // 47
        char Supports_Bluetooth;                    // 48
        std::string Item_Weight;                    // 49

    public:
        TV_Details_Base(std::string _1, std::string _2, std::string _3, std::string _4, int _5,
                        std::string _6, std::string _7, short int _8, short int _9, std::string _10,
                        std::string _11, std::string _12, std::string _13, short int _14, short int _15,
                        std::string _16, std::string _17, short int _18, std::string _19, std::string _20,
                        std::string _21, short int _22, std::string _23, char _24, short int _25,
                        std::string _26, std::string _27, std::string _28, std::string _29, std::string _30,
                        std::string _31, std::string _32, std::string _33, std::string _34, short int _35,
                        short int _36, short int _37, std::string _38, char _39, char _40, short int _41,
                        short int _42, std::string _43, short int _44, std::string _45, std::string _46,
                        char _47, char _48, std::string _49)
        {
            Brand = _1;
            Manufacturer = _2;
            Model = _3;
            Model_Name = _4;
            Model_Year = _5;
            Product_Dimensions = _6;
            Item_Model_No = _7;
            Memory_Storage_Capacity = _8;
            Ram_Memory_Installed_Size = _9;
            Operating_System = _10;
            Hardware_Interface = _11;
            Graphics_Coprocessor = _12;
            Tuner_Technology = _13;
            Response_Time = _14;
            Resolution = _15;
            Special_Features = _16;
            Mounting_Hardware = _17;
            No_of_Item = _18;
            Remote_Control_Description = _19;
            Remote_Control_Technology = _20;
            Display_Tech = _21;
            Display_Size = _22;
            Display_Type = _23;
            Colour_Screen = _24;
            Viewing_Angle = _25;
            Image_Aspect_Ratio = _26;
            Image_Brightness = _27;
            Supported_Image_Types = _28;
            Screen_Resolution = _29;
            Resolution_Pixels = _30;
            Audio_Input = _31;
            Audio_Output_Mode = _32;
            Supported_Audio_Formats = _33;
            Speaker_Surround_Sound = _34;
            Audio_Wattage = _35;
            Voltage = _36;
            Wattage = _37;
            Power_Source = _38;
            Batteries_Included = _39;
            Batteries_Required = _40;
            Refresh_Rate = _41;
            Total_USB_Ports = _42;
            Connector_Type = _43;
            Max_Operating_Distance = _44;
            Mounting_Type = _45;
            Media_Format = _46;
            Includes_Remote = _47;
            Supports_Bluetooth = _48;
            Item_Weight = _49;
        }

        void display_base_info()
        {
            std::cout << "======================== S A M S U N G   Q L E D   8 K ============================" << std::endl << std::endl;
            std::cout << "---------------------- T E C H N I C A L  D E T A I L S ---------------------------" << std::endl << std::endl;
            std::cout << "Brand                                 : " << Brand << std::endl;
            std::cout << "Manufacturer                          : " << Manufacturer << std::endl;
            std::cout << "Model                                 : " << Model << std::endl;
            std::cout << "Model Name                            : " << Model_Name << std::endl;
            std::cout << "Model Year                            : " << Model_Year << std::endl;
            std::cout << "Product Dimensions                    : " << Product_Dimensions << std::endl;
            std::cout << "Item Model Number                     : " << Item_Model_No << std::endl;
            std::cout << "Memory Storage Capacity               : " << Memory_Storage_Capacity << " GB" << std::endl;
            std::cout << "Ram Memory Installed Size             : " << Ram_Memory_Installed_Size << " GB" << std::endl;
            std::cout << "Operating System                      : " << Operating_System << std::endl;
            std::cout << "Hardware Interface                    : " << Hardware_Interface << std::endl;
            std::cout << "Graphics Coprocessor                  : " << Graphics_Coprocessor << std::endl;
            std::cout << "Tunner Technology                     : " << Tuner_Technology << std::endl;
            std::cout << "Response Time                         : " << Response_Time << " Milliseconds" << std::endl;
            std::cout << "Resolution                            : " << Resolution << "K" << std::endl;
            std::cout << "Special Features                      : " << Special_Features << std::endl;
            std::cout << "Mounting Hardware                     : " << Mounting_Hardware << std::endl;
            std::cout << "Number of Items                       : " << No_of_Item << std::endl;
            std::cout << "Remote Control Description            : " << Remote_Control_Description << std::endl;
            std::cout << "Remote Control Technology             : " << Remote_Control_Technology << std::endl;
            std::cout << "Display Technology                    : " << Display_Tech << std::endl;
            std::cout << "Standing Screen Display Size          : " << Display_Size << " Inches" << std::endl;
            std::cout << "Display Type                          : " << Display_Type << std::endl;
            std::cout << "Colour Screen                         : " << Colour_Screen << std::endl;
            std::cout << "Viewing Angle                         : " << Viewing_Angle << " Degrees" << std::endl;
            std::cout << "Image Aspect Ratio                    : " << Image_Aspect_Ratio << std::endl;
            std::cout << "Image Brightness                      : " << Image_Brightness << std::endl;
            std::cout << "Supported Image Types                 : " << Supported_Image_Types << std::endl;
            std::cout << "Screen Resolution                     : " << Screen_Resolution << std::endl;
            std::cout << "Resolution in Pixels                  : " << Resolution_Pixels << std::endl;
            std::cout << "Audio Input                           : " << Audio_Input << std::endl;
            std::cout << "Audio Output Mode                     : " << Audio_Output_Mode << std::endl;
            std::cout << "Supported Audio Formats               : " << Supported_Audio_Formats << std::endl;
            std::cout << "Speaker Surround Sound                : " << Speaker_Surround_Sound << std::endl;
            std::cout << "Audio Wattage                         : " << Audio_Wattage << " Watts" << std::endl;
            std::cout << "Voltage                               : " << Voltage << " Volts" << std::endl;
            std::cout << "Wattage                               : " << Wattage << " Watts" << std::endl;
            std::cout << "Power Source                          : " << Power_Source << std::endl;
            std::cout << "Batteries Included                    : " << Batteries_Included << std::endl;
            std::cout << "Batteries Required                    : " << Batteries_Required << std::endl;
            std::cout << "Refrest Rate                          : " << Refresh_Rate << " Hz" << std::endl;
            std::cout << "Total USB Ports                       : " << Total_USB_Ports << std::endl;
            std::cout << "Connector Type                        : " << Connector_Type << std::endl;
            std::cout << "Maximum Operating Distance            : " << Max_Operating_Distance << " Feet" << std::endl;
            std::cout << "Mounting Type                         : " << Mounting_Type << std::endl;
            std::cout << "Media Format                          : " << Media_Format << std::endl;
            std::cout << "Includes Remote                       : " << Includes_Remote << std::endl;
            std::cout << "Supports Bluetooth Technology         : " << Supports_Bluetooth << std::endl;
            std::cout << "Item Weight                           : " << Item_Weight << std::endl << std::endl;
        }
};

// Derived class: Adds additional info
class TV_AdditionalInfo : public TV_Details_Base
{
    private:
        std::string ASIN;                           // 50
        float Customer_Reviews;                     // 51
        std::string Date_First_Available;           // 52
        std::string Packer;                         // 53
        std::string Importer;                       // 54
        std::string Item_Dimensions;                // 55
        short int Net_Quantity;                     // 56
        std::string Generic_Name;                   // 57

    public:
        TV_AdditionalInfo(std::string _1, std::string _2, std::string _3, std::string _4, int _5,
                          std::string _6, std::string _7, short int _8, short int _9, std::string _10,
                          std::string _11, std::string _12, std::string _13, short int _14, short int _15,
                          std::string _16, std::string _17, short int _18, std::string _19, std::string _20,
                          std::string _21, short int _22, std::string _23, char _24, short int _25,
                          std::string _26, std::string _27, std::string _28, std::string _29, std::string _30,
                          std::string _31, std::string _32, std::string _33, std::string _34, short int _35,
                          short int _36, short int _37, std::string _38, char _39, char _40, short int _41,
                          short int _42, std::string _43, short int _44, std::string _45, std::string _46,
                          char _47, char _48, std::string _49,
                          std::string _50, float _51, std::string _52, std::string _53, std::string _54,
                          std::string _55, short int _56, std::string _57)
            : TV_Details_Base(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15,
                              _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28,
                              _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41,
                              _42, _43, _44, _45, _46, _47, _48, _49)
        {
            ASIN = _50;
            Customer_Reviews = _51;
            Date_First_Available = _52;
            Packer = _53;
            Importer = _54;
            Item_Dimensions = _55;
            Net_Quantity = _56;
            Generic_Name = _57;
        }

        void display()
        {
            display_base_info();

            std::cout << "\n------------------------ A D D I T I O N A L  I N F O -----------------------------" << std::endl << std::endl;
            std::cout << "ASIN                                  : " << ASIN << std::endl;
            std::cout << "Customer Reviews                      : " << Customer_Reviews << std::endl;
            std::cout << "Date First Available                  : " << Date_First_Available << std::endl;
            std::cout << "Packer                                : " << Packer << std::endl;
            std::cout << "Importer                              : " << Importer << std::endl;
            std::cout << "Item Dimensions LxWxH                 : " << Item_Dimensions << std::endl;
            std::cout << "Net Quantity                          : " << Net_Quantity << " Piece" << std::endl;
            std::cout << "Generic Name                          : " << Generic_Name << std::endl << std::endl;
        }
};

int main()
{
    TV_AdditionalInfo Details("Samsung", "Samsung India Pvt Ltd, Samsung India\n\t\t\t\t\t Electronics Pvt. Ltd. having its Registered Office\n\t\t\t\t\t at: 6th Floor, DLF Centre, Sansad Marg, New Delhi-110001", "QA85QN900CKXXL"
                      ,"QA85QN900CKXXL", 2023, "1.54 x 187.66 x 107.15 cm; 43.7 kg", "QA85QN900CKXXL", 8, 5, "Tizen", "Bluetooth, USB, HDMI", "Neural Quantum Processor 8K", "DVB-T", 6, 8 
                      ,"Smart TV Features : Built-in Voice Assistant,\n\t\t\t\t\t Far-Field Voice Interaction | Supported apps: Netflix,\n\t\t\t\t\t Prime Video, YouTube, etc., Screen mirroring, Universal Guide,\n\t\t\t\t\t Media Home, Tap View, Mobile Camera Support, Music Wall,\n\t\t\t\t\t AI Speaker, Easy Setup, App Casting, Wireless DeX, SmartThings,\n\t\t\t\t\t Smart Hub, IoT Sensor, Web Browser"
                      ,"1N LED TV, 1N Power Cord, 1N Remote Control,\n\t\t\t\t\t 2N Stand-Top, 1N OC", 1, "Voice Assistant Key | Hotkeys for Prime Video,\n\t\t\t\t\t Netflix, Samsung TV Plus and Disney+Hotstar", "IR, Bluetooth", "Neo QLED", 85, "HDR 10+", 'Y', 178, "16:09", "High Brightness", "GIF,JPEG", "3840 x 2160 Pixels", "7680 x 4320 Pixels", "Auxiliary", "Surrond", "mp3_audio, wma"
                      , "Dolby Atmos", 90, 240, 90, "AC", 'N', 'N', 100, 3, "Bluetooth, Wi-Fi, USB, HDMI", 10, "Wall Mount & Taable Mount", "AVI, MPEG", 'Y', 'Y', "43 kg 700 g", "B0BZHX3MPG", 4.0, "23 March 2023", "Samsung India Electronics Pvt. Ltd. having its\n\t\t\t\t\t Registered Office at: 6th Floor, DLF Centre, Sansad\n\t\t\t\t\t Marg, New Delhi-110001"
                      , "Samsung India Electronics Pvt. Ltd. having its\n\t\t\t\t\t Registered Office at: 6th Floor, DLF Centre, Sansad Marg,\n\t\t\t\t\t New Delhi-110001", "15 x 1877 x 1071 Millimeters", 1, "Television");

    Details.display();
    return 0;
}
