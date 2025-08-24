#include "LaptopApp.hpp"

int main() {
    std::cout << "==========================GAMING_LAPTOP_INFO===========================\n\n";

    Laptop_Basic_Info b("ASUS", 
                        "ASUS, INVENTEC(CHONGQING) CORPORATION, NO.66, WEST DISTRICK 2ND RD, SHAAPINGBA DISTRICT, CHONGQING, CHINA 401331",
                        "ROG Strix SCAR 16", 
                        "Windows 11 Home", 
                        "Black", 
                        "Ultra-Portable", 
                        42, 
                        33.6, 
                        40.64, 
                        "2560 x 1600 Pixels", 
                        "2560 x 1600 Pixels", 
                        "10.4 x 33.6 x 42 cm; 5.09kg", 
                        1, 
                        "G634JZR-CM932WS", 
                        "Laptop, Adapter & User Manual", 
                        5900);
    b.show();

    Laptop_Processor_Info p("Intel", "Core i9", 5.4, 14);
    p.show();

    Laptop_Memory_Info m(32, "DDR5", "DDR5", 32, 5200, 2000, "SSD", "PCIe 4.0 NVMe M.2", "No Optical Drive");
    m.show();

    Laptop_Graphics_Info g("NVIDIA GeForce RTX 4080", "NVIDIA", "NVIDIA GeForce", "GDDR6", 12, "PCIe 4.0");
    g.show();


   Laptop_Connectivity_Info c("Wi-Fi 6E", 6.0, 3, 1, "Dolby Atmos");
    c.show();


    Laptop_Battery_Info bat(15,'Y', 8);
    bat.show();

    return 0;
}

// 329 Line Code
