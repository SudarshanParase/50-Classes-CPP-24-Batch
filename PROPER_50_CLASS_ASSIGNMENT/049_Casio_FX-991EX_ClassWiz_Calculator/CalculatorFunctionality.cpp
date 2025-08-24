#include "CalculatorFunctionality.hpp"

Calculator_Functionality::Calculator_Functionality
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5 )
        {
            Total = _1;
            Matrix = _2;
            Spreadsheet = _3;
            Equation = _4;
            Statistical = _5;
        }

void Calculator_Functionality::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------ F U N C T I O N A L I T Y ------------------------" << endl << endl;
    
    cout << "Total Functions                : " << Total << endl;
    cout << "Matrix & Vector                : " << Matrix << endl;
    cout << "Spreadsheet Mode               : " << Spreadsheet << endl;
    cout << "Equation Solver                : " << Equation << endl;
    cout << "Statistical Operations         : " << Statistical << endl << endl;
}