#include "SamsungImageDisplay.hpp"

Samsung_Image::Samsung_Image(std::string _1, std::string _2
                        , std::string _3, std::string _4)
                {
                    Display_System = _1;
                    Native_Chip = _2;
                    Max_Brightness = _3;
                    Aspect_Ratio = _4;
                }

void Samsung_Image::show()
{
    using std::cout;
    using std::endl;
    
    cout << "----------------------------- I M A G E   D I S P L A Y --------------------------" << endl << endl;
    
    cout << "Display System                     : " << Display_System << endl;
    cout << "Native Chip Resolution             : " << Native_Chip << endl;
    cout << "Maximum Brightness                 : " << Max_Brightness << endl;
    cout << "Aspect Ratio                       : " << Aspect_Ratio << endl << endl;
}