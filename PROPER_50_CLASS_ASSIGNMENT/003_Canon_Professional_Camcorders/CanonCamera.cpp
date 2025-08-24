#include "CanonCamera.hpp"

Canon_Camera::Canon_Camera(std::string _1, std::string _2
                         , std::string _3)
                         {
                            ND_Filter = _1;
                            Microphone_Type = _2;
                            Recording_Media = _3;
                         }

        void Canon_Camera::show()
        {
            using std::cout;
            using std::endl;

            cout << "--------------------------- C A M E R A ---------------------------" << endl << endl;
            
            cout << "Built-In ND Filter                         : " << ND_Filter << endl;
            cout << "Built-In Microphone Type                   : " << Microphone_Type << endl;
            cout << "Recording Media                            : " << Recording_Media << endl << endl;
        
        }