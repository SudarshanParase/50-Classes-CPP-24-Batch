#ifndef BELT_BUCKLE_HPP
#define BELT_BUCKLE_HPP

#include <iostream>
#include <string>

class Belt_Buckle
{
    private:

        std::string Buckle;
        std::string Attachment;
        std::string Material;
        std::string Customization;
        std::string Iconic;

    public:

        Belt_Buckle(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // BELT_BUCKLE_HPP