#ifndef AMAZON_AUDIO_HPP
#define AMAZON_AUDIO_HPP

#include <iostream>
#include <string>

class Amazon_Audio
{
    private:

        std::string Speakers;
        std::string Sound;
        std::string Audio;
        std::string Microphones;
        char Noise_Cancellation;
        std::string Voice_Activation;

    public:

        Amazon_Audio(std::string, std::string
                    , std::string, std::string
                    , char, std::string); // Only Declaration

        void show(); // Only Declaration
};
#endif // AMAZON_AUDIO_HPP