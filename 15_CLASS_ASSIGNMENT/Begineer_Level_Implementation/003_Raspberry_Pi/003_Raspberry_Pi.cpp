// Header file Inclusion
#include <iostream>
#include <string>

class RP_Basic_Info
{
    private:
        std::string Brand;
        std::string Manufacturer;
        std::string Model;
        std::string Model_Name;
        std::string Item_Model_No;
        std::string Operating_System;
        std::string Compatible_Devices;
        std::string Mounting_Hardware;
        char Batteries_Required; // Y or N
        float Wireless_Type;
        short int Total_USB_Ports;
        std::string Connector_Type;
        short int Item_Weight;

    public:
        RP_Basic_Info(std::string _Brand, std::string _Manufacturer, std::string _Model,
                      std::string _Model_Name, std::string _Item_Model_No, 
                      std::string _Operating_System, std::string _Compatible_Devices,
                      std::string _Mounting_Hardware, char _Batteries_Required,
                      float _Wireless_Type, short int _USB_Ports, 
                      std::string _Connector_Type, short int _Item_Weight)
        {
            this->Brand = _Brand;
            this->Manufacturer = _Manufacturer;
            this->Model = _Model;
            this->Model_Name = _Model_Name;
            this->Item_Model_No = _Item_Model_No;
            this->Operating_System = _Operating_System;
            this->Compatible_Devices = _Compatible_Devices;
            this->Mounting_Hardware = _Mounting_Hardware;
            this->Wireless_Type = _Wireless_Type;
            this->Total_USB_Ports = _USB_Ports;
            this->Connector_Type = _Connector_Type;
            this->Item_Weight = _Item_Weight;
        };

        void show()
        {
            std::cout << "----------------- RASPEBRRY PI BASIC INFO -----------------" << std::endl << std::endl;
            std::cout << "Brand                         : " << Brand << std::endl;
            std::cout << "Manufacturer                  : " << Manufacturer << std::endl;
            std::cout << "Model                         : " << Model << std::endl;
            std::cout << "Model Name                    : " << Model_Name << std::endl;
            std::cout << "Item Model Number             : " << Item_Model_No << std::endl;
            std::cout << "Operating System              : " << Operating_System << std::endl;
            std::cout << "Compatible Devices            : " << Compatible_Devices << std::endl;
            std::cout << "Mounting Hardware             : " << Mounting_Hardware << std::endl;
            std::cout << "Wireless Type                 : " << Wireless_Type << " ac" << std::endl;
            std::cout << "Total USB Ports               : " << Total_USB_Ports << std::endl;
            std::cout << "Connector Type                : " << Connector_Type << std::endl;
            std::cout << "Item Weight                   : " << Item_Weight << " Grams" << std::endl << std::endl;
            
         };
};

class RP_Memory_Processor_Info
{
    private:
        short int M_Storage_Capacity;
        short int Ram_M_Installed_Size;
        std::string Ram_M_Tech;
        std::string P_Brand;
        float P_Speed;
        short int P_Count;
    public:
        RP_Memory_Processor_Info(short int _1, short int _2, std::string _3,
                                 std::string _4, float _5, short int _6)
        {
            this->M_Storage_Capacity = _1;
            this->Ram_M_Installed_Size = _2;
            this->Ram_M_Tech = _3;
            this->P_Brand = _4;
            this->P_Speed = _5;
            this->P_Count = _6;

        };

        void show()
        {
            std::cout << "---------- RASPEBRRY PI MEMORY & PROCESSOR INFO ----------" << std::endl << std::endl;
            std::cout << "Memory Storage Capacity       : " << M_Storage_Capacity << " GB" << std::endl;
            std::cout << "Ram Memory Installed Size     : " << Ram_M_Installed_Size << " GB" << std::endl;
            std::cout << "Processor Brand               : " << P_Brand << std::endl;
            std::cout << "Processor Speed               : " << P_Speed << " GHz" << std::endl;
            std::cout << "Processor Count               : " << P_Count << std::endl << std::endl;
            
        };
};

class RP_Additional_Info
{
    private:
        std::string ASIN;
        float Customer_Reviews;
        int Best_Sellers_Rank;
        std::string Date_First_Available;

    public:
        RP_Additional_Info(std::string _1, float _2, int _3, std::string _4)
        {
            this->ASIN = _1;
            this->Customer_Reviews = _2;
            this->Best_Sellers_Rank = _3;
            this->Date_First_Available = _4;
        };

        void show()
        {
            std::cout << "-------------- RASPEBRRY PI ADDITIONAL INFO ---------------" << std::endl << std::endl;
            std::cout << "ASIN                          : " << ASIN << std::endl;
            std::cout << "Customer Reviews              : " << Customer_Reviews << " Rating" << std::endl;
            std::cout << "Best Sellers Rank             : " << "#" << Best_Sellers_Rank << " in Electronics" << std::endl;
            std::cout << "Date First Available          : " << Date_First_Available << std::endl << std::endl;

        };
};

int main(void)
{
    std::cout << "================== RASPBERRY_PI INFORMATION =========================" << std::endl << std::endl;

    RP_Basic_Info Basic_Info("Raspberry Pi", "Raspberry Pi", "SC1113", "Raspberry Pi 5", "SC1113", "Linux",
                            "Camera, Display, Network Device, USB Device", "Raspberry Pi 5 (16GB)", 'N',
                            802.11, 4, "Wi-Fi, Bluetooth, Ethernet, USB 3.0, USB 2.0", 45);
    
                            Basic_Info.show();

    RP_Memory_Processor_Info M_P_Info(16, 16, "DDR4", "Broadcom", 2.4, 4);
                            M_P_Info.show();

    RP_Additional_Info Additional_Info("BODSPYPKRG", 4.6, 180082, "29 January 2025");
                            Additional_Info.show();
    return (0);
}

