#include "KoenigseggChassis.hpp"

Koenigsegg_Chassis::Koenigsegg_Chassis
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Chassis = _1;
            Body = _2;
            Weight = _3;   
            Dimensions = _4;
            Storage = _5;
        }

void Koenigsegg_Chassis::show()
{
    using std::cout;
    using std::endl;

    cout << "----------- C H A S S I S ,   W E I G H T   &   D I M E N S I O N S -----------" << endl << endl;
  
    cout << "Chassis                        : " << Chassis << endl;
    cout << "Body                           : " << Body << endl;
    cout << "Weight                         : " << Weight << endl;
    cout << "Dimensions                     : " << Dimensions << endl;
    cout << "Storage                        : " << Storage << endl << endl;
}