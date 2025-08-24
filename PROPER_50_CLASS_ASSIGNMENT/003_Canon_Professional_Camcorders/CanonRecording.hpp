#ifndef CANON_RECORDING_HPP
#define CANON_RECORDING_HPP

#include <iostream>
#include <string>

class Canon_Recording
{
    private:

        std::string Broadcast_System;
        std::string Recording_Modes;
        std::string Audio_Recording;
        std::string IP_Streaming;

    public:

        Canon_Recording(std::string, std::string
                      , std::string, std::string); // Only Declaration
                      
        void show(); // Only Declaration
};

#endif