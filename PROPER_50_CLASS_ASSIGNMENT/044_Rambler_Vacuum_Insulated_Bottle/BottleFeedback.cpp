#include "BottleFeedback.hpp"

Bottle_Feedback::Bottle_Feedback
    (std::string _1, std::string _2 
    , std::string _3 )
    {
        User = _1;
        Comparison = _2;
        Routine = _3;
    }

void Bottle_Feedback::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ R E A L - W O R L D   F E E D B A C K ------------------" << endl << endl;

    cout << "User Praise                    : " << User << endl;
    cout << "Comparison to Competitors      : " << Comparison << endl;
    cout << "Routine Use                    : " << Routine << endl << endl;
}