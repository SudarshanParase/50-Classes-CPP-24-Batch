#include "AmazonConnectivity.hpp"

Amazon_Connectivity::Amazon_Connectivity
        (std::string _1, std::string _2
    , std::string _3, std::string _4)
    {
        Wifi = _1;
        Bluetooth = _2;
        Smart = _3;
        Other_ports = _4;
    }

void Amazon_Connectivity::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------- C O N N E C T I V I T Y ---------------------------" << endl << endl;
   
    cout << "Wi-Fi                          : " << Wifi << endl;
    cout << "Bluetooth                      : " << Bluetooth << endl;
    cout << "Smart Home Protocols           : " << Smart << endl;
    cout << "Other Ports                    : " << Other_ports << endl << endl;
}