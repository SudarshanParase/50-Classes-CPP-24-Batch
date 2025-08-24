#include "ErgotronGeneral.hpp"

Ergotron_General::Ergotron_General(std::string _1, char _2
                                , std::string _3, std::string _4
                                , std::string _5, std::string _6  
                                , std::string _7, std::string _8)

                    {
                        Screen_Size = _1;
                        No_of_Displays_Supported = _2;
                        Load_Capacity = _3;
                        Mounting_Hole = _4;
                        Orientation = _5;
                        Grommet_Size = _6;
                        Clamp_Compatibility = _7;
                        Min_Depth_Requirement = _8;
                        
                    }

void Ergotron_General::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------------------- G E N E R A L --------------------------------" << endl << endl;
                                          
            cout << "Supported Screen Sizes             : " << Screen_Size << endl;
            cout << "Number of Displyas Supported       : " << No_of_Displays_Supported << endl;
            cout << "Load Capacity                      : " << Load_Capacity << endl;
            cout << "Mounting-Hole Pattern              : " << Mounting_Hole << endl;
            cout << "Orientation                        : " << Orientation << endl;
            cout << "Supported Grommet Size             : " << Grommet_Size << endl;
            cout << "Desk Clamp Compatibility           : " << Clamp_Compatibility << endl;
            cout << "Minimum Depth Requirement          : " << Min_Depth_Requirement << endl << endl;
}