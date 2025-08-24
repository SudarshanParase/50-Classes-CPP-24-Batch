// Header File Inclusion
#include "RingValue.hpp"

Ring_Value::Ring_Value
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 )
        {
            Auction = _1;
            Adjusted = _2;
            Price = _3;
            Market = _4;
        }

void Ring_Value::show()
{
    using std::cout;
    using std::endl;

    cout << "---------- A U C T I O N   P E R F O R M A N C E   &   V A L U E ----------" << endl << endl;

    cout << "Auction Sale Price             : " << Auction << endl;
    cout << "Adjusted Estimate              : " << Adjusted << endl;
    cout << "Price per Carat                : " << Price << endl;
    cout << "Market Standing                : " << Market << endl << endl;
}