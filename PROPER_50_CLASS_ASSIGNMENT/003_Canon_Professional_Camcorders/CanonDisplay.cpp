#include "CanonDisplay.hpp"

Canon_Display::Canon_Display(std::string _1, std::string _2
                          , char _3, int _4)
                          {
                            Display_Type = _1;
                            Screen_Size = _2;
                            Touchscreen = _3;
                            Screen_Resolution = _4;
                          }

void Canon_Display::show()
        {
            using std::cout;
            using std::endl;

            
            cout << "-------------------------- D I S P L A Y --------------------------" << endl << endl;

            cout << "Display Type                               : " << Display_Type << endl;
            cout << "Screen Size                                : " << Screen_Size << endl;
            cout << "Touchscreen                                : " << Touchscreen << endl;
            cout << "Screen Resolution                          : " << Screen_Resolution << " Dots" << endl << endl;
        }