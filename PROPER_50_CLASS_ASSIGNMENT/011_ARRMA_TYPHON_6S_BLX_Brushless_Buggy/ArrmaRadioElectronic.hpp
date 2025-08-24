#ifndef ARRMA_RADIO_ELECTRONIC_HPP
#define ARRMA_RADIO_ELECTRONIC_HPP

#include <iostream>
#include <string>

class Arrma_Radio
{
    private:

        std::string Radio_Transmitter;
        std::string Receiver;
        std::string Servo;
        std::string Servo_Torque;
        std::string Waterproof_Electronics;

    public:

        Arrma_Radio(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ARRMA_RADIO_ELECTRONIC_HPP