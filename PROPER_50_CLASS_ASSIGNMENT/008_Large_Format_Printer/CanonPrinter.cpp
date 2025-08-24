#include "CanonPrinter.hpp"

Canon_Printer::Canon_Printer
(std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8
        , std::string _9, std::string _10
        , std::string _11)
        {
            Printing_Tech = _1;
            Color_Type = _2;
            Configuration = _3;
            Ink_Type = _4;
            Ink_Color = _5;
            Compatible = _6;
            No_of_Nozzles = _7;
            Print_Resolution = _8;
            Borderless_Printing = _9;
            Duplex_Printing = _10;
            Printer_Language = _11;
        }

void Canon_Printer::show()
{
    using std::cout;
    using std::endl;
    
    cout << "----------------------------------- P R I N T E R --------------------------------" << endl << endl;
    
    cout << "Printing Technology                : " << Printing_Tech << endl;
    cout << "Color Type                         : " << Color_Type << endl;
    cout << "Configuration                      : " << Configuration << endl;
    cout << "Ink Type                           : " << Ink_Type << endl;
    cout << "Ink Color                          : " << Ink_Color << endl;
    cout << "Compatible Cartridges              : " << Compatible << endl;
    cout << "Number of Nozzles                  : " << No_of_Nozzles << endl;
    cout << "Print Resolution                   : " << Print_Resolution << endl;
    cout << "Borderless Printing                : " << Borderless_Printing << endl;
    cout << "Duplex Printing                    : " << Duplex_Printing << endl;
    cout << "Printer Language                   : " << Printer_Language << endl << endl;
}