#include "KettlePower.hpp"

Kettle_Power::Kettle_Power 
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 )
    {
        Power = _1;
        Boiling = _2;
        Temperature = _3;
        Keep = _4;
    }

void Kettle_Power::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------- H E A T I N G   &   P O W E R ----------------------" << endl << endl;

    cout << "Wattage / Power                : " << Power << endl;
    cout << "Boiling Speed                  : " << Boiling << endl;
    cout << "Temperature Settings           : " << Temperature << endl;
    cout << "Keep-Warm Function             : " << Keep << endl << endl;
}