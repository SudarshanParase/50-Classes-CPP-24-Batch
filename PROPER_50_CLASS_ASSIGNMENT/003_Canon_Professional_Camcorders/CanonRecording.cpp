#include "CanonRecording.hpp"

Canon_Recording::Canon_Recording(std::string _1, std::string _2
                                , std::string _3, std::string _4)
                                {
                                    Broadcast_System = _1;
                                    Recording_Modes = _2;
                                    Audio_Recording = _3;
                                    IP_Streaming = _4;
                                }

void Canon_Recording::show()
        {
            using std::cout;
            using std::endl;

            cout << "------------------------ R E C O R D I N G ------------------------" << endl << endl;
            
            cout << "Broadcast System Compatibility             : " << Broadcast_System << endl;
            cout << "Recording Modes                            : " << Recording_Modes << endl;
            cout << "Audio Recording                            : " << Audio_Recording << endl;
            cout << "IP Streaming                               : " << IP_Streaming << endl << endl;   
        }