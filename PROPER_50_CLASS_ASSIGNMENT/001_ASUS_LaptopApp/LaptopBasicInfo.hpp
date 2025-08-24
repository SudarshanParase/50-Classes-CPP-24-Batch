#ifndef LAPTOP_BASIC_INFO_HPP
#define LAPTOP_BASIC_INFO_HPP

 #include <iostream>
 #include <string>


class Laptop_Basic_Info {
private:
    std::string Brand, Manufacturer, Series, Operating_System, Colur, Form_Factor;
    int Item_Height, Item_Weight;
    float Item_Width, Display_Size;
    std::string Screen_Resolution, Resolution, Product_Dimensions;
    short int Batteries;
    std::string Model_no, Included_Components;

public:
    Laptop_Basic_Info(std::string _Brand, std::string _Manufacturer, std::string _Series, std::string _Operating_System,
                      std::string _Colur, std::string _Form_Factor, int _Item_Height, float _Item_Width,
                      float _Display_Size, std::string _Screen_Resolution, std::string _Resolution,
                      std::string _Product_Dimensions, short int _Batteries, std::string _Model_no,
                      std::string _Included_Components, int _Item_Weight); // Only Declaration

    void show(); // Only Declaration
};

#endif // LAPTOP_BASIC_INFO_HPP
