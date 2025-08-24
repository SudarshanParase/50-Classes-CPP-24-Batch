// Header File Inclusion
#include "RingCultural.hpp"

Ring_Cultural::Ring_Cultural
        (std::string _1, std::string _2 
        , std::string _3)
        {
            World = _1;
            Ultimate = _2;
            Celebrity = _3;
        }

void Ring_Cultural::show()
{
    using std::cout;
    using std::endl;

    cout << "--- C U L T U R A L   &   H I S T O R I C A L   S I G N I F I C A N C E ---" << endl << endl;

    cout << "World Record Holder            : " << World << endl;
    cout << "Ultimate Symbol                : " << Ultimate << endl;
    cout << "Celebrity & Collector Allure   : " << Celebrity << endl << endl;
}