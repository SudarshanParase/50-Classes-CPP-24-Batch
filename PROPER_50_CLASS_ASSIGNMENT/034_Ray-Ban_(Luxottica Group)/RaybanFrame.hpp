#ifndef RAYBAN_FRAME_HPP
#define RAYBAN_FRAME_HPP

#include <iostream>
#include <string>

class Rayban_Frame
{
    private:

        std::string Frame_Type;
        std::string Frame_Shape;
        std::string Frame_Material;
        std::string Temple;
        std::string Nose;
        std::string Finish;
        std::string Weight;
        std::string Build;

    public:

        Rayban_Frame(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration

};

#endif // RAYBAN_FRAME_HPP