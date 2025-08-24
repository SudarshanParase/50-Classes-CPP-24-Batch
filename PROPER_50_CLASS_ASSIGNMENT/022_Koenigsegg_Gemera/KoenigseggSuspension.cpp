#include "KoenigseggSuspension.hpp"

Koenigsegg_Suspension::Koenigsegg_Suspension
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Suspension = _1;
            Steering = _2;
            Brakes = _3;
            Wheels = _4;
        }

void Koenigsegg_Suspension::show()
{
    using std::cout;
    using std::endl;

    cout << "------------ S U S P E N S I O N ,   W H E E L S   &   B R A K E S ------------" << endl << endl;

    cout << "Suspension                     : " << Suspension << endl;
    cout << "Steering                       : " << Steering << endl;
    cout << "Brakes                         : " << Brakes << endl;
    cout << "Wheels / Tyres                 : " << Wheels << endl << endl;
}