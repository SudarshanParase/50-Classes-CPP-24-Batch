#ifndef CANON_PRINTER_MEDIA_HANDLING_HPP
#define CANON_PRINTER_MEDIA_HANDLING_HPP

#include <iostream>
#include <string>

class Canon_Printer_Media
{
    private:

        std::string Media_Handling;
        std::string Media_Sizes;
        std::string Media_Thickness;
        std::string Media_Roll_Diameter;

    public:

        Canon_Printer_Media(std::string, std::string
                        , std::string, std::string); // Only Declaration


        void show(); // Only Declaration
};

#endif // CANON_PRINTER_MEDIA_HANDLING_HPP