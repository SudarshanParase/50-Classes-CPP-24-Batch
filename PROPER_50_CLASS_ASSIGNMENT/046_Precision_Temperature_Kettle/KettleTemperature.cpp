#include "KettleTemperature.hpp"

Kettle_Temperature::Kettle_Temperature
            (std::string _1, std::string _2 
            , std::string _3 )
            {
                Precision = _1;
                Heat = _2;
                User = _3;
            }

void Kettle_Temperature::show()
{
    using std::cout;
    using std::endl;

    cout << "------ T E M P E R A T U R E   A C C U R A C Y   &   F E E D B A C K ------" << endl << endl;

    cout << "Precision                      : " << Precision << endl;
    cout << "Heat Retention                 : " << Heat << endl;
    cout << "User Praises                   : " << User << endl << endl;

}