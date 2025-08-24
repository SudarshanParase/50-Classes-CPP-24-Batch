#include "SamsungLens.hpp"


Samsung_Lens::Samsung_Lens(char _1, std::string _2)
            {
                Includes_Lens = _1;
                Projection_Size = _2;
            }

void Samsung_Lens::show()
{
    using std::cout;
    using std::endl;
    
    cout << "-------------------------------------- L E N S -----------------------------------" << endl << endl;
    
    cout << "Includes Lens                      : " << Includes_Lens << endl;
    cout << "Projection Size                    : " << Projection_Size << endl << endl;

}