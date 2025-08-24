// Header File Inclusion 
#include <iostream>
#include <string>

using std::string;


class Laptop_Basic_Info 
{
    private:
        string Brand;
        string Manufacturer;
        string Series;
        string Operating_System;
        string Colur;
        string Form_Factor;
        int Item_Height;
        float Item_Width;
        float Display_Size;
        string Screen_Resolution;
        string Resolution;
        string Product_Dimensions;
        short int Batteries;
        string Model_no;
        string Included_Components;
        int Item_Weight;
            
    public:
        // Parameterized Constructor
        Laptop_Basic_Info(string _Brand , string _Manufacturer, string _Series, string _Operating_System
                        , string _Colur, string _Form_Factor, int _Item_Height, float _Item_Width
                        , float _Display_Size, string _Screen_Resolution, string _Resolution, string _Product_Dimensions
                        , short int _Batteries, string _Model_no, string _Included_Components, int _Item_Weight)
                        {
                            this->Brand = _Brand;
                            this->Manufacturer = _Manufacturer;
                            this->Series = _Series;
                            this->Operating_System = _Operating_System;
                            this->Colur = _Colur;
                            this->Form_Factor = _Form_Factor;
                            this->Item_Height = _Item_Height;
                            this->Item_Width = _Item_Width;
                            this->Display_Size = _Display_Size;
                            this->Screen_Resolution = _Screen_Resolution;
                            this->Resolution = _Resolution;
                            this->Product_Dimensions = _Product_Dimensions;
                            this->Batteries = _Batteries;
                            this->Model_no = _Model_no;
                            this->Included_Components = _Included_Components;
                            this->Item_Weight = _Item_Weight;
                        }

        void show()
        {
            std::cout << "---------------------------LAPTOP BASIC INFO---------------------------" << std::endl;
            std::cout << "Brand Name                    : " << Brand << std::endl;
            std::cout << "Manufacturer                  : " << Manufacturer << std::endl;
            std::cout << "Series                        : " << Series << std::endl;
            std::cout << "Operating System              : " << Operating_System << std::endl;
            std::cout << "Colur                         : " << Colur << std::endl;
            std::cout << "Form Factor                   : " << Form_Factor << std::endl;
            std::cout << "Item Height                   : " << Item_Height << " Centimeters" << std::endl;
            std::cout << "Item Width                    : " << Item_Width << " Centimeters" << std::endl;
            std::cout << "Standing Screen Display Size  : " << Display_Size << " Centimeters" << std::endl;
            std::cout << "Screen Resolution             : " << Screen_Resolution << std::endl;
            std::cout << "Resolution                    : " << Resolution << std::endl;
            std::cout << "Product Dimensions            : " << Product_Dimensions << std::endl;
            std::cout << "Batteries                     : " << Batteries << " Lithium lon batteries required.(Included)" << std::endl;
            std::cout << "Item Model Number             : " << Model_no << std::endl;
            std::cout << "Included Components           : " << Included_Components << std::endl;
            std::cout << "Item Weight                   : " << Item_Weight << " Grams" << std::endl << std::endl;
           
        }
        
};

class Laptop_Processor_Info
{
    private:
        string P_Brand;
        string P_Type;
        float P_Speed;
        short int P_Count;
    
    public:

        Laptop_Processor_Info(string _P_Brand, string _P_Type, float _P_Speed, short int _P_Count)
        {
            this->P_Brand = _P_Brand;
            this->P_Type = _P_Type;
            this->P_Speed = _P_Speed;
            this->P_Count = _P_Count;
        };
        void show()
        {
            std::cout <<"------------------------LAPTOP PROCESSOR INFO-------------------------" << std::endl;
            std::cout << "Processor Brand               : " << P_Brand << std::endl;
            std::cout << "Processor Type                : " << P_Type << std::endl;
            std::cout << "Processor Speed               : " << P_Speed << " GHz" << std::endl;
            std::cout << "Processor Count               : " << P_Count << std::endl << std::endl;
            
        }
};

class Laptop_Memory_Info
{
    private:
        short int RAM_Size;
        string M_Technology;
        string Comp_Memory_Type;
        short int Max_M_Supported;
        short int M_Clock_Speed;
        short int Hard_Drive_Size;
        string Hard_Drive_Description;
        string Hard_Drive_Interface;
        string Optical_Drive_Type; // In Yes or No
    
    public:

        Laptop_Memory_Info(short int _RAM_Size, string _M_Tech, string _Comp_Memory_Type, short int _Max_M_Supported
                          , short int _M_Clock_Speed, short int _Hard_Drive_Size, string _Hard_Drive_Description, string _Hard_Drive_Interface
                          , string _Optical_Drive_Type)
        {
            this->RAM_Size = _RAM_Size;
            this->M_Technology = _M_Tech;
            this->Comp_Memory_Type = _Comp_Memory_Type;
            this->Max_M_Supported = _Max_M_Supported;
            this->M_Clock_Speed = _M_Clock_Speed;
            this->Hard_Drive_Size = _Hard_Drive_Size;
            this->Hard_Drive_Description = _Hard_Drive_Description;
            this->Hard_Drive_Interface = _Hard_Drive_Interface;
            this->Optical_Drive_Type = _Optical_Drive_Type;
        };
        
        void show()
        {
            std::cout <<"-------------------------LAPTOP MEMORY INFO---------------------------" << std::endl;
            std::cout << "RAM Size                      : " << RAM_Size << " GB" << std::endl;
            std::cout << "Memory Technology             : " << M_Technology << std::endl;
            std::cout << "Computer Memory Type          : " << Comp_Memory_Type << std::endl;
            std::cout << "Maximum Memory Supported      : " << Max_M_Supported << " GB" << std::endl;
            std::cout << "Memory Clock Speed            : " << M_Clock_Speed << " MHz" << std::endl;
            std::cout << "Hard Drive Size               : " << Hard_Drive_Size << " TB" << std::endl;
            std::cout << "Hard Drive Description        : " << Hard_Drive_Description << std::endl;
            std::cout << "Hard Dirve Interface          : " << Hard_Drive_Interface << std::endl;
            std::cout << "Optical Drive Type            : " << Optical_Drive_Type << std::endl << std::endl;
        };

};

class Laptop_Graphics_Info
{
    private:
        string G_Coprocessor;
        string G_Chipset_Brand;
        string G_Card_Description;
        string G_RAM_Type;
        short int G_Card_Ram_Size;
        string G_Card_Interface;
    
    public:
        Laptop_Graphics_Info(string _G_Coprocessor, string _G_Chipset_Brand, string _G_Card_Description, 
                             string _G_RAM_Type, short int _G_Card_Ram_Size, string _G_Card_Interface)
        {
                    this->G_Coprocessor = _G_Coprocessor;
                    this->G_Chipset_Brand = _G_Chipset_Brand;
                    this->G_Card_Description = _G_Card_Description;
                    this->G_RAM_Type = _G_RAM_Type;
                    this->G_Card_Ram_Size = _G_Card_Ram_Size;
                    this->G_Card_Interface = _G_Card_Interface;
        };

        void show()
        {
            std::cout << "------------------------LAPTOP GRAPHICS INFO-------------------------" << std::endl;
            std::cout << "Graphics Coprocessor          : " << G_Coprocessor << std::endl;
            std::cout << "Graphics Chipset Brand        : " << G_Chipset_Brand << std::endl;
            std::cout << "Graphics Card Description     : " << G_Card_Description << std::endl;
            std::cout << "Graphics RAM Type             : " << G_RAM_Type << std::endl;
            std::cout << "Graphics Card Ram Size        : " << G_Card_Ram_Size << " GB" << std::endl;
            std::cout << "Graphics Card Interface       : " << G_Card_Interface << std::endl << std::endl;
        };

};

class Laptop_Connectivity_Info
{
    private:
        string C_Type;
        float Wireless_Type;
        short int No_of_USB_Ports;
        short int No_of_HDMI_Ports;
        string Audio_Details;
    
    public:
        Laptop_Connectivity_Info(string _C_Type, float _Wireless_Type, short int _USB_Ports, short int _HDMI_Ports
                                , string _Audio_Details)
        {
                    this->C_Type = _C_Type;
                    this->Wireless_Type = _Wireless_Type;
                    this->No_of_USB_Ports = _USB_Ports;
                    this->No_of_HDMI_Ports =_HDMI_Ports;
                    this->Audio_Details = _Audio_Details;
        };

        void show()
        {
            std::cout << "------------------------LAPTOP CONNECTIVITY INFO-------------------------" << std::endl;
            std::cout << "Connectivity Type             : " << C_Type << std::endl;
            std::cout << "Wireless Type                 : " << Wireless_Type << " ax" << std::endl;
            std::cout << "Number of USB 3.0 Ports       : " << No_of_USB_Ports << std::endl;
            std::cout << "Number of HDMI Ports          : " << No_of_HDMI_Ports << std::endl;
            std::cout << "Audio Details                 : " << Audio_Details << std::endl << std::endl;
            
        };
};

class Laptop_Battery_Info
{
    private:
        short int Voltage;
        char Are_Batteries_Included; // In Yes or No
        short int No_Of_Lithium_Ion_Cells;
    
    public:
        Laptop_Battery_Info(short int _Voltage, char _Are_Batteries_Included, short int _No_Of_Lithium_Ion_Cells)
        {
            this->Voltage = _Voltage;
            this->Are_Batteries_Included = _Are_Batteries_Included;
            this->No_Of_Lithium_Ion_Cells = _No_Of_Lithium_Ion_Cells;

        };

        void show()
        {
            std::cout << "------------------------LAPTOP BATTERY INFO-------------------------" << std::endl;
            std::cout << "Voltage                       : " << Voltage << " Volts" << std::endl;
            std::cout << "Are Batteries Included        : " << Are_Batteries_Included << std::endl;
            std::cout << "Number of Lithium lon Cells   : " << No_Of_Lithium_Ion_Cells << std::endl << std::endl;
        };

};

int main(void)
{
    std::cout << "==========================GAMING_LAPTOP_INFO===========================" << std::endl <<std::endl;

    
    Laptop_Basic_Info Basic_Info("ASUS", "ASUS, INVENTEC(CHONGQING) CORPORATION, NO.66,\n\t\t\t\tWEST DISTRICK 2ND RD, SHAAPINGBA DISTRICT, CHONGQING,\n\t\t\t\tCHINA 401331"
                                , "ROG Strix SCAR 16","Windows 11 Home" , "Black", "Ultra-Portable", 42, 33.6, 40.64, "2560 x 1600 Pixels", "2560 x 1600 Pixels"
                                , "10.4 x 33.6 x 42 cm; 5.09kg", 1, "G634JZR-CM932WS", "Laptop, Adapter & User Manual", 5900);
    Basic_Info.show();
 
    Laptop_Processor_Info Processor_Info("Intel", "Core i9" , 2.2 , 24);
    Processor_Info.show();

    Laptop_Memory_Info Memory_Info(32, "DDR5", "SODIMM", 64, 5600, 2
                                  , "SSD", "PCIE x 4", "No Optical Storage");
    Memory_Info.show();

    Laptop_Graphics_Info Graphics_Info("NVIDIA GeForce RTX 4070", "AMD", "Dedicated", "GDDR6", 12, "Integrated");
    Graphics_Info.show();

    Laptop_Connectivity_Info Connectivity_Info("Bluetooth", 802.11, 3, 1, "Headphones");
    Connectivity_Info.show();

    Laptop_Battery_Info Battery_Info(20, 'Y', 4);
    Battery_Info.show();
    
    return (0);
}