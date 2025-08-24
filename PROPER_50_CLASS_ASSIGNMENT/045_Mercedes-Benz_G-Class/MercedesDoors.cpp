// Header File Inclusion
#include "MercedesDoors.hpp"

Mercedes_Doors::Mercedes_Doors
        (std::string _1, std::string _2 
        , std::string _3, char _4 
        , char _5, char _6 
        , std::string _7, std::string _8 
        , std::string _9, std::string _10 
        , std::string _11, std::string _12 
        , std::string _13, char _14)
        {
                Exterior = _1;
                Interior = _2;
                Power_Windows = _3;
                Rear_Windshield = _4;
                Side_Window = _5;
                Soft_Close = _6;
                Door_Pockets = _7;
                Scuff_Plates = _8;
                ORVM = _9;
                Adjustable = _10;
                Anti_Glare = _11;
                Wipers = _12;
                Bootlid_Opener = _13;
                Rear_Defogger = _14;
        }

void Mercedes_Doors::show()
{
    using std::cout;
    using std::endl;

    cout << "------ D O O R S ,   W I N D O W S ,   M I R R O R S   &   W I P E R S ------" << endl << endl;

    cout << "Exterior Door Handles                      : " << Exterior << endl;
    cout << "Interior Door Handles Finish               : " << Interior << endl;
    cout << "Power Windows                              : " << Power_Windows << endl;
    cout << "Rear Windshield Blind                      : " << Rear_Windshield << endl;
    cout << "Side Window Blinds                         : " << Side_Window << endl;
    cout << "Soft-close Door                            : " << Soft_Close << endl;
    cout << "Door Pockets                               : " << Door_Pockets << endl;
    cout << "Scuff Plates                               : " << Scuff_Plates << endl;
    cout << "ORVM (Outside Rear View Mirrors)           : " << ORVM << endl;
    cout << "Adjustable ORVMs                           : " << Adjustable << endl;
    cout << "Anti-glare Mirrors                         : " << Anti_Glare << endl;
    cout << "Wipers                                     : " << Wipers << endl;
    cout << "Bootlid Opener                             : " << Bootlid_Opener << endl;
    cout << "Rear Defogger                              : " << Rear_Defogger << endl << endl; 
}