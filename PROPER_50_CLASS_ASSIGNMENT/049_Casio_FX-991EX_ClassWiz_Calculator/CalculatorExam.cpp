#include "CalculatorExam.hpp"

Calculator_Exam::Calculator_Exam
        (std::string _1, std::string _2 
        , std::string _3 )
        {
            Exam = _1;
            Usage = _2;
            Ease = _3;
        }

void Calculator_Exam::show()
{
    using std::cout;
    using std::endl;

    cout << "-------- E X A M   C O M P A T I B I L I T Y   &   A P P R O V A L --------" << endl << endl;

    cout << "Exam Approval                  : " << Exam << endl;
    cout << "Usage                          : " << Usage << endl;
    cout << "Ease of Learning               : " << Ease << endl << endl;
}