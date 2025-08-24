// Header File Inclusion
#include "Fire_Boltt_Header_File.hpp"

int main(void)
{
    
    std::cout << "\n============== F I R E - B O L T T   M A V E R I C K   S M A R T W A T C H ==============" << std::endl << std::endl;
    
    Technical_Information T_Info("Fire-Boltt", "Fire-Boltt", "Maverick", "Black"
                                , "11.1 Centimeters", "11 Centimeters", "2.02 Inches"
                                , "7.3 x 11 x 11.1 cm; 250 g", "1 Lithium Ion Batteries Required. (Included)"
                                , "BSW177", "Bluetooth", "Bluetooth", "Android"
                                , "3 Hours", "5 Days", 'Y', "5 Watt Hours"
                                , "2 g", '1', "Smartwatch, Charging Cable, Warranty\n\t\t\t\t\tCard, Manual"
                                );

                T_Info.show();

    Additional_Information A_Info("B0CT3CSYCV","3.4 out of 5 stars"
                            , "#7.025 in Electronics (See Top 100 in\n\t\t\t\t\tElectronics)\n\t\t\t\t\t#292 in Smart Watches"
                            , "23 January 2024", "Savex Technologies Pvt Ltd", "Savex Technologies Pvt Ltd"
                            , "7.3 x 11 x 11.1 Centimeters", "1 Piece", "Smart Watch");

                A_Info.show();

    return (0);
}

// 221 Line Code