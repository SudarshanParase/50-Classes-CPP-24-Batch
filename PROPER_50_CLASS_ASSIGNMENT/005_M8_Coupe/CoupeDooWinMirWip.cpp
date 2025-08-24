#include "CoupeDooWinMirWip.hpp"

Coupe_Doo_Win::Coupe_Doo_Win
            (std::string _1, std::string _2, std::string _3
                    , std::string _4, std::string _5, char _6
                    , char _7, std::string _8, std::string _9
                    , std::string _10, std::string _11, char _12
                    , std::string _13, char _14, std::string _15
                    , char _16)

            {
                Exterior_Door = _1;
                Interior_Door = _2;
                Power_Windows = _3;
                One_Touch_Down = _4;
                One_Touch_Up = _5;
                Side_Window = _6;
                Soft_Close = _7;
                Door_Pockets = _8;
                Scuff_Plates = _9;
                ORVM = _10;
                Adjustable_ORVM = _11;
                Turn_Indicators_ORVM = _12;
                Anti_Glare_Mirrors = _13;
                Rain_Sensing_Wipers = _14;
                Bootlid_Opener = _15;
                Rear_Defogger = _16;
            }

void Coupe_Doo_Win::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------DOORS, WINDOWS, MIRRORS & WIPERS-------------------------" << endl << endl;
    
    cout << "Exterior Door Handles Finish               : " << Exterior_Door << endl;
    cout << "Interior Door Handles Finish               : " << Interior_Door << endl;
    cout << "Power Windows Position                     : " << Power_Windows << endl;
    cout << "One Touch Down                             : " << One_Touch_Down << endl; 
    cout << "One Touch Up                               : " << One_Touch_Up << endl;
    cout << "Side Window Blinds                         : " << Side_Window << endl;
    cout << "Soft-close Door                            : " << Soft_Close << endl;
    cout << "Door Pockets                               : " << Door_Pockets << endl;
    cout << "Scuff Plates                               : " << Scuff_Plates << endl;
    cout << "ORVM (Outside Rear View Mirrors)           : " << ORVM << endl;
    cout << "Adjustable ORVMs                           : " << Adjustable_ORVM << endl;
    cout << "Turn Indicators on ORVMs                   : " << Turn_Indicators_ORVM << endl;
    cout << "Anti-glare Mirrors                         : " << Anti_Glare_Mirrors << endl;
    cout << "Rain-sensing Wipers                        : " << Rain_Sensing_Wipers << endl;
    cout << "Bootlid Opener                             : " << Bootlid_Opener << endl;
    cout << "Rear Defogger                              : " << Rear_Defogger << endl << endl; 
}