#ifndef FIRE_INFO_HPP
#define FIRE_INFO_HPP

#include <iostream>
#include <string>

class Fire_Info
{
    private:

        std::string Price;
        std::string Rating;
        std::string Remote;
        std::string Power;
        std::string Supported_A;
        std::string Best_For;
        std::string Hands;
        std::string Picture;
        std::string Behind;
        std::string Storage;
        std::string Memory;
        std::string Wifi;
        std::string Live;
        std::string Quad;
        std::string Optional;

    public:

        Fire_Info(std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // FIRE_INFO_HPP