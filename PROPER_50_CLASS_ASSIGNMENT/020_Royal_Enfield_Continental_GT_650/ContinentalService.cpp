#include "ContinentalService.hpp"

Continental_Service::Continental_Service     
            (std::string _1, std::string _2 
            , std::string _3, std::string _4 )
            {
                First = _1;
                Second = _2;
                Third = _3;
                Fourth = _4;
            }

void Continental_Service::show()
{
    using std::cout;
    using std::endl;

    cout << "------- S E R V I C E   &   M A I N T E N A N C E   S C H E D U L E -------" << endl << endl;

    cout << "1st Service                                    : " << First << endl;
    cout << "2nd Service                                    : " << Second << endl;
    cout << "3rd Service                                    : " << Third << endl;
    cout << "4th Service                                    : " << Fourth << endl << endl;
}