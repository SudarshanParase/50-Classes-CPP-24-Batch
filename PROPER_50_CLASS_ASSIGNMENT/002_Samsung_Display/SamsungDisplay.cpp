// Header File Inclusion
#include "SamsungDisplay.hpp"

Samsung_Display::Samsung_Display(short int _1, std::string _2, std::string _3, std::string _4, std::string _5 
                                , std::string _6, std::string _7, std::string _8, std::string _9, short int _10 
                                , std::string _11, std::string _12, std::string _13, std::string _14, std::string _15 
                                , short int _16, std::string _17, short int _18, std::string _19, char _20)
                                {
                                    Display_Size = _1;
                                    Panel_Type = _2;
                                    Aspect_Ratio = _3;
                                    Resolution = _4;
                                    Maximum_Brightness = _5;
                                    HDR_Compatibility = _6;
                                    Contrast_Ratio = _7;
                                    Dynamic_Contrast_Ratio = _8;
                                    Response_Time = _9;
                                    Refresh_Rate = _10;
                                    Variable_Refresh_Tech = _11;
                                    Bit_Depth = _12;
                                    Color_Gamut = _13;
                                    Viewing_Angle = _14;
                                    Screen_Area = _15;
                                    Curvature = _16;
                                    Dot_Pitch = _17;
                                    Pixels_Per_Inch = _18;
                                    Finish = _19;
                                    Touchscreen_Technology = _20;
                                }

void Samsung_Display::show()
                          {
                            using std::cout;
                            using std::endl;    

                            cout << "----------------------- D I S P L A Y   S I Z E -----------------------" << endl << endl;

                            cout << "Display Size                           : " << Display_Size << "*" << endl;
                            cout << "Panel Type                             : " << Panel_Type << endl;
                            cout << "Aspect Ratio                           : " << Aspect_Ratio << endl;
                            cout << "Resolution                             : " << Resolution << endl;
                            cout << "Maximum Brightness                     : " << Maximum_Brightness << endl;
                            cout << "HDR Compatibility                      : " << HDR_Compatibility << endl;
                            cout << "Contrast Ratio                         : " << Contrast_Ratio << endl;
                            cout << "Dynamic Contrast Ratio                 : " << Dynamic_Contrast_Ratio << endl;
                            cout << "Response Time                          : " << Response_Time << endl;
                            cout << "Refresh Rate                           : " << Refresh_Rate << " Hz" << endl;
                            cout << "Variable Refresh Technology            : " << Variable_Refresh_Tech << endl;
                            cout << "Bit Depth / Color Support              : " << Bit_Depth << endl;
                            cout << "Color Gamut                            : " << Color_Gamut << endl;
                            cout << "Viewing Angle (H x V)                  : " << Viewing_Angle << endl;
                            cout << "Screen Area                            : " << Screen_Area << endl;
                            cout << "Curvature                              : " << Curvature << "R" << endl;
                            cout << "Dot Pitch                              : " << Dot_Pitch << endl;
                            cout << "Pixels Per Inch (ppi)                  : " << Pixels_Per_Inch << " ppi" << endl;
                            cout << "Finish                                 : " << Finish << endl;
                            cout << "Touchscreen Technology                 : " << Touchscreen_Technology << endl << endl;
                          }