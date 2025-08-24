#include "LaptopBasicInfo.hpp"
#include <iostream>



Laptop_Basic_Info::Laptop_Basic_Info(std::string _Brand, std::string _Manufacturer, std::string _Series, std::string _Operating_System,
                                     std::string _Colur, std::string _Form_Factor, int _Item_Height, float _Item_Width,
                                     float _Display_Size, std::string _Screen_Resolution, std::string _Resolution,
                                     std::string _Product_Dimensions, short int _Batteries, std::string _Model_no,
                                     std::string _Included_Components, int _Item_Weight) {
    Brand = _Brand;
    Manufacturer = _Manufacturer;
    Series = _Series;
    Operating_System = _Operating_System;
    Colur = _Colur;
    Form_Factor = _Form_Factor;
    Item_Height = _Item_Height;
    Item_Width = _Item_Width;
    Display_Size = _Display_Size;
    Screen_Resolution = _Screen_Resolution;
    Resolution = _Resolution;
    Product_Dimensions = _Product_Dimensions;
    Batteries = _Batteries;
    Model_no = _Model_no;
    Included_Components = _Included_Components;
    Item_Weight = _Item_Weight;
}

void Laptop_Basic_Info::show() 
{
    std::cout << "---------------------------BASIC_INFO-----------------------------" << std::endl;

    std::cout << "Brand                         : " << Brand << std::endl;
    std::cout << "Manufacturer                  : " << Manufacturer << std::endl;
    std::cout << "Series                        : " << Series << std::endl;
    std::cout << "Operating System              : " << Operating_System << std::endl;
    std::cout << "Colour                        : " << Colur << std::endl;
    std::cout << "Form Factor                   : " << Form_Factor << std::endl;
    std::cout << "Item Height (mm)              : " << Item_Height << std::endl;
    std::cout << "Item Width (cm)               : " << Item_Width << std::endl;
    std::cout << "Display Size (cm)             : " << Display_Size << std::endl;
    std::cout << "Screen Resolution             : " << Screen_Resolution << std::endl;
    std::cout << "Resolution                    : " << Resolution << std::endl;
    std::cout << "Product Dimensions            : " << Product_Dimensions << std::endl;
    std::cout << "Batteries Included            : " << Batteries << std::endl;
    std::cout << "Model Number                  : " << Model_no << std::endl;
    std::cout << "Included Components           : " << Included_Components << std::endl;
    std::cout << "Item Weight (g)               : " << Item_Weight << std::endl << std::endl;

}
