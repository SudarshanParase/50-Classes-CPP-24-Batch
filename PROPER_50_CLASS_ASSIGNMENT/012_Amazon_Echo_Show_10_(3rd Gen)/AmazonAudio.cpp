#include "AmazonAudio.hpp"

Amazon_Audio::Amazon_Audio
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , char _5, std::string _6)
        {
            Speakers = _1;
            Sound = _2;
            Audio = _3;
            Microphones = _4;
            Noise_Cancellation = _5;
            Voice_Activation = _6;
        }

void Amazon_Audio::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- A U D I O   &   M I C R O P H O N E ---------------------" << endl << endl;
    
    cout << "Speakers                       : " << Speakers << endl;
    cout << "Sound Technology               : " << Sound << endl;
    cout << "Audio Streaming                : " << Audio << endl;
    cout << "Microphones                    : " << Microphones << endl;
    cout << "Noise Cancellation             : " << Noise_Cancellation << endl;
    cout << "Voice Activation               : " << Voice_Activation << endl << endl;
}