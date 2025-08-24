#include "Samsung_Header_File.hpp"

int main(void)
{
      
    std::cout << "==================== S A M S U N G   S M A R T   P R O J E C T O R ===============" << std::endl << std::endl;
   
    Samsung_Basic_Info Basic_Info("Samsung", "6995870515285", "SP-LFF3CLAXXZA", "887276751351");

                Basic_Info.show();

    Samsung_Key_Specs Key_Specs("DLP", "1920 x 1080 (Full HD)", "230 Lumens (ANSI)"
                            , "30 to 100 / 76.2 to 254.0 cm", "HDR10", "1x Micro-HDMI Audio, Video\n\t\t\t\t\t1x USB-C Power"
                            , "LED" );

                Key_Specs.show();

    Samsung_Image Image("DLP", "1920 x 1080 (Full HD)", "230 Lumens (ANSI)", "16:9");

                Image.show(); 

    Samsung_Lens Lens('Y', "30 to 100 / 76.2 to 254.0 cm");

            Lens.show();

    Samsung_Feature Feature("HDR10", "Not Specified by Manufacturer", 'Y', 5, 'Y');

            Feature.show();

    Samsung_IO IO("1x Micro-HDMI Audio, Video\n\t\t\t\t\t1x USB-C Power");

        IO.show();


    Samsung_Hardware Hardware("Apple AirPlay, Works with Alexa, Samsung Bixby", "Tizen", "Yes: Android & iOS"
                        , "Yes, Built-in", "5.2");

                Hardware.show();

    Samsung_General General("LED", "6.8 x 4.0 x 3.7 / 17.3 x 10.2 x 9.4 cm With Stand", "1.8 lb / 0.8 kg");

                General.show();

    Samsung_Packaging Packaging(3.095, "10.4 x 6.4 x 5.4");

                Packaging.show();

    return (0);
}

// 492 Line Code