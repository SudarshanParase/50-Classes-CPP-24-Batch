#ifndef CANON_PRINTER_HPP
#define CANON_PRINTER_HPP

#include <iostream>
#include <string>

class Canon_Printer
{
    private:

        std::string Printing_Tech;
        std::string Color_Type;
        std::string Configuration;
        std::string Ink_Type;
        std::string Ink_Color;
        std::string Compatible;
        std::string No_of_Nozzles;
        std::string Print_Resolution;
        std::string Borderless_Printing;
        std::string Duplex_Printing;
        std::string Printer_Language;

    public:

        Canon_Printer(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration

};

#endif // CANON_PRINTER_HPP