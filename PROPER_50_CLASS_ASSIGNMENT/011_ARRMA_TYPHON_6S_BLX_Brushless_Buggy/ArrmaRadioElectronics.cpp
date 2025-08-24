#include "ArrmaRadioElectronic.hpp"

Arrma_Radio::Arrma_Radio
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Radio_Transmitter = _1;
            Receiver = _2;
            Servo = _3;
            Servo_Torque = _4;
            Waterproof_Electronics = _5;
        }

void Arrma_Radio::show()
{
    using std::cout;
    using std::endl;
  
    cout << "------------------------- R A D I O   &   E L E C T R O N I C S -------------------------" << endl << endl;
    
    cout << "Radio Transmitter                      : " << Radio_Transmitter << endl;
    cout << "Receiver                               : " << Receiver << endl;
    cout << "Servo                                  : " << Servo << endl;
    cout << "Servo Torque                           : " << Servo_Torque << endl;
    cout << "Waterproof Electronics                 : " << Waterproof_Electronics << endl << endl;

}