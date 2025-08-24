#include "GlassesIO.hpp"

Glasses_IO::Glasses_IO(short int _1, std::string _2, std::string _3
                    , std::string _4, std::string _5, std::string _6)
                    {
                        Internal_Storage = _1;
                        Lens_Type = _2;
                        Camera = _3;
                        Microphone = _4;
                        Speakers = _5;
                        Noise = _6;
                    }

void Glasses_IO::show()
                {
                    using std::cout;
                    using std::endl;

                    cout << "------------------ I N P U T S / O U T P U T S --------------------" << endl << endl;
            
                    cout << "Internal Storage                           : " << Internal_Storage << " GB" <<  endl;
                    cout << "Lens Type                                  : " << Lens_Type << endl;
                    cout << "Camera                                     : " << Camera << endl;
                    cout << "Microphone                                 : " << Microphone << endl;
                    cout << "Speakers                                   : " << Speakers << endl;
                    cout << "Noise                                      : " << Noise << endl << endl; 
        }