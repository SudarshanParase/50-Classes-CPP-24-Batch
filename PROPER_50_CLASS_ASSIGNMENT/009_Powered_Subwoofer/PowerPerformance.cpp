// Header File Inclusion
#include "PowerPerformance.hpp" 

Power_Performance::Power_Performance
        (std::string _1, std::string _2 )
        {
            Frequency = _1;
            Maximum = _2;
        }

void Power_Performance::show()
{
    using std::cout;
    using std::endl;
    
    cout << "------------------------------- P E R F O R M A N C E ----------------------------" << endl << endl;

    cout << "Frequency Response                 : " << Frequency << endl;
    cout << "Maximum SPL                        : " << Maximum << endl << endl;
}