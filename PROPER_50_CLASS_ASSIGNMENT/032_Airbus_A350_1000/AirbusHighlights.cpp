#include "AirbusHighlights.hpp"

Airbus_Highlights::Airbus_Highlights
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Longest = _1;
            Capacity = _2;
            Comfort = _3;
            Sales = _4;
        }

void Airbus_Highlights::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------------- H I G H L I G H T S -----------------------------" << endl << endl;

    cout << "Longest-Range                  : " << Longest << endl;
    cout << "Capacity                       : " << Capacity << endl;
    cout << "Passanger Comfort              : " << Comfort << endl;
    cout << "Sales                          : " << Sales << endl << endl;
}