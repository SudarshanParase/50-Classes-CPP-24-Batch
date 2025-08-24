#include "CanonInterfaces.hpp"

Canon_Interface::Canon_Interface(std::string _1, std::string _2 
                               , std::string _3, std::string _4)
                               {
                                    Video_Connectors = _1;
                                    Audio_Connectors = _2;
                                    Other_IO = _3;
                                    Wireless_Interfaces = _4;
                               }

void Canon_Interface::show()
                    {
                        using std::cout;
                        using std::endl;

                        cout << "------------------------ I N T E R F A C E ------------------------" << endl << endl;
                        
                        cout << "Video Connectors                           : " << Video_Connectors << endl;
                        cout << "Audio Connectors                           : " << Audio_Connectors << endl;
                        cout << "Other I/O                                  : " << Other_IO << endl;
                        cout << "Wireless Interfaces                        : " << Wireless_Interfaces << endl << endl;
                    }