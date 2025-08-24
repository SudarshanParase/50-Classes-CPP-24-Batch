// Header File Inclusion
#include "SamsungKeySpecs.hpp"


Samsung_Key_Specs::Samsung_Key_Specs(short int _1, std::string _2, std::string _3, std::string _4
                                    ,std::string _5, std::string _6, std::string _7, std::string _8
                                    ,char _9, std::string _10, std::string _11, std::string _12
                                    ,char _13)
                                    {
                                        Display_Size = _1;
                                        Panel_Type = _2;
                                        Resolution = _3;
                                        Max_Brightness = _4;
                                        HDR_Compatibility = _5;
                                        Bit_Depth = _6;
                                        Color_Gamut = _7;
                                        Finish = _8;
                                        Touchscreen_Technology = _9;
                                        Inputs = _10;
                                        Outputs = _11;
                                        USB_IO = _12;
                                        Built_In_Speackers = _13;

                                    }

void Samsung_Key_Specs::show()
                            {
                                using std::cout;
                                using std::endl;

                                
                                cout << "-------------------------- K E Y   S P E C S --------------------------" << endl << endl;
                                
                                cout << "Display Size                           : " << Display_Size << "*" << endl;
                                cout << "Panel Type                             : " << Panel_Type << endl;
                                cout << "Resolution                             : " << Resolution << endl;
                                cout << "Maximum Brightness                     : " << Max_Brightness << endl;
                                cout << "HDR Compatibility                      : " << HDR_Compatibility << endl;
                                cout << "Bit Depth / Color Support              : " << Bit_Depth << endl;
                                cout << "Color Gamut                            : " << Color_Gamut << endl;
                                cout << "Finish                                 : " << Finish << endl;
                                cout << "Touchscreen Technology                 : " << Touchscreen_Technology << endl;
                                cout << "Inputs                                 : " << Inputs << endl;
                                cout << "Outputs                                : " << Outputs << endl;
                                cout << "USB I/O                                : " << USB_IO << endl;
                                cout << "Built-in Speakers                      : " << Built_In_Speackers << endl << endl;
                            }