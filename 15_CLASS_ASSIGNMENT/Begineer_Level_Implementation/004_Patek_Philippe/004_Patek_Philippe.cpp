// Header file inclusion
#include <iostream>
#include <string>

class PP_Basic_Info
{
    private:
        std::string Listing_Code;                   // 1
        std::string Brand;                          // 2
        std::string Model;                          // 3
        std::string Reference_No;                   // 4
        int Product_Code;                           // 5
        std::string Movement;                       // 6
        std::string Case;                           // 7
        std::string Bracelet;                       // 8
        std::string Year_of_Production;             // 9
        std::string Condition;                      // 10
        std::string Scope_of_Delivery;              // 11
        std::string Gender;                         // 12
        std::string Location;                       // 13
        int Price;                                  // 14
        std::string Availability;                   // 15

    public:
        PP_Basic_Info(std::string _1, std::string _2, std::string _3, std::string _4
                    , int _5, std::string _6, std::string _7, std::string _8
                    , std::string _9, std::string _10, std::string _11, std::string _12
                    , std::string _13, int _14, std::string _15)
        {
            Listing_Code = _1;
            Brand = _2;
            Model = _3;
            Reference_No = _4;
            Product_Code = _5;
            Movement = _6;
            Case = _7;
            Bracelet = _8;
            Year_of_Production = _9;
            Condition = _10;
            Scope_of_Delivery = _11;
            Gender = _12;
            Location = _13;
            Price = _14;
            Availability = _15;

        };

        void display()
        {
            std::cout << "----------------------------- BASIC INFORMATION --------------------------------" << std::endl << std::endl;
            
            std::cout << "Listing Code                          : " << Listing_Code << std::endl;
            std::cout << "Brand                                 : " << Brand << std::endl;
            std::cout << "Model                                 : " << Model << std::endl;
            std::cout << "Reference Number                      : " << Reference_No << std::endl;
            std::cout << "Dealer Product Code                   : " << Product_Code << std::endl;
            std::cout << "Movement                              : " << Movement << std::endl;
            std::cout << "Case Material                         : " << Case << std::endl;
            std::cout << "Bracelet Material                     : " << Bracelet << std::endl;
            std::cout << "Year of Production                    : " << Year_of_Production << std::endl;
            std::cout << "Condition                             : " << Condition << std::endl;
            std::cout << "Scope of Delivery                     : " << Scope_of_Delivery << std::endl;
            std::cout << "Gender                                : " << Gender << std::endl;
            std::cout << "Location                              : " << Location << std::endl;
            std::cout << "Price                                 : €" << Price << " (=Rs.15,024,554)" << std::endl;
            std::cout << "Availability                          : " << Availability << std::endl << std::endl << std::endl;
        }; 
};

class PP_Caliber
{
    private:
        std::string Movement;
        std::string Caliber_Movement;
        short int Power_Reserve;
        short int No_of_Jewels;

    public:
        PP_Caliber(std::string _1, std::string _2, short int _3, short int _4)
        {
            Movement = _1;
            Caliber_Movement = _2;
            Power_Reserve = _3;
            No_of_Jewels = _4;
        };

        void display()
        {
            std::cout << "----------------------------- CALIBER INFORMATION --------------------------------" << std::endl << std::endl;

            std::cout << "Movement                              : " << Movement << std::endl;
            std::cout << "Caliber/Movement                      : " << Caliber_Movement << std::endl;
            std::cout << "Power Reserve                         : " << Power_Reserve << " h" << std::endl;
            std::cout << "No_of_Jewels                          : " << No_of_Jewels << std::endl << std::endl;
            
        };
};

class PP_Case
{
    private:
        std::string Case_Material; // 1
        short int Case_Diameter;   // 2
        short int Water_Resistance;// 3
        std::string Bezel_Material;// 4
        std::string Crystal;       // 5
        std::string Dial;          // 6
        std::string Dial_Numerals; // 7

    public:
        PP_Case(std::string _1, short int _2, short int _3, std::string _4
                , std::string _5, std::string _6, std::string _7)
        {
            Case_Material = _1;
            Case_Diameter = _2;
            Water_Resistance = _3;
            Bezel_Material = _4;
            Crystal = _5;
            Dial = _6;
            Dial_Numerals = _7;
        };

        void display()
        {
            std::cout << "------------------------------- CASE INFORMATION ----------------------------------" << std::endl << std::endl;

            std::cout << "Case Material                         : " << Case_Material << std::endl;
            std::cout << "Case Diameter                         : " << Case_Diameter << " mm" << std::endl;
            std::cout << "Water Resistance                      : " << Water_Resistance << " ATM" << std::endl;
            std::cout << "Bezel Material                        : " << Bezel_Material << std::endl;
            std::cout << "Crystal                               : " << Crystal << std::endl;
            std::cout << "Dial                                  : " << Dial << std::endl;
            std::cout << "Dial_Numerals                         : " << Dial_Numerals << std::endl << std::endl;
            
        };
};

class PP_Bracelet
{
    private:
        std::string Bracelet_Material;
        std::string Clasp;
        std::string Clasp_Material;

    public:
        PP_Bracelet(std::string _1, std::string _2, std::string _3)
        {
            Bracelet_Material = _1;
            Clasp = _2;
            Clasp_Material = _3;
        };

        void display()
        {
            std::cout << "----------------------------- BRACELET INFORMATION -------------------------------" << std::endl << std::endl;

            std::cout << "Bracelet Material                     : " << Bracelet_Material << std::endl;
            std::cout << "Clasp                                 : " << Clasp << std::endl;
            std::cout << "Clasp_Material                        : " << Clasp_Material << std::endl << std::endl;
            

        };
};

class PP_Product_Safety
{
    private:
        std::string Item_Type;            // 1
        std::string Reference_No;         // 2
        std::string Registered_Trademark; // 3
        std::string Company_Name;         // 4
        std::string Country;              // 5
        std::string Street_Address;       // 6
        std::string Street_Line;          // 7
        int ZIP_Code;                     // 8
        std::string City;                 // 9
        std::string State;                // 10
        std::string Phone_No;             // 11
        std::string Email_Address;        // 12
        std::string Website;              // 13

    public:
        PP_Product_Safety(std::string _1, std::string _2, std::string _3, std::string _4
                         ,std::string _5, std::string _6, std::string _7, int _8
                         ,std::string _9, std::string _10, std::string _11, std::string _12
                         ,std::string _13)
        {
            Item_Type = _1;
            Reference_No = _2;
            Registered_Trademark = _3;
            Company_Name = _4;
            Country = _5;
            Street_Address = _6;
            Street_Line = _7;
            ZIP_Code = _8;
            City = _9;
            State = _10;
            Phone_No = _11;
            Email_Address = _12;
            Website = _13;
        };

        void display()
        {
            std::cout << "------------------------------- SAFETY INFORMATION ----------------------------------" << std::endl << std::endl;
            
            std::cout << "Item Type                             : " << Item_Type << std::endl;
            std::cout << "Reference Number                      : " << Reference_No << std::endl;
            std::cout << "Registered Trademark                  : " << Registered_Trademark << std::endl;
            std::cout << "Company Name                          : " << Company_Name << std::endl;
            std::cout << "Country                               : " << Country << std::endl;
            std::cout << "Street Address                        : " << Street_Address << std::endl;
            std::cout << "Street Line 2                         : " << Street_Line << std::endl;
            std::cout << "ZIP Code                              : " << ZIP_Code << std::endl;
            std::cout << "City                                  : " << City << std::endl;
            std::cout << "State                                 : " << State << std::endl;
            std::cout << "Phone Number                          : " << Phone_No << std::endl;
            std::cout << "Email Address                         : " << Email_Address << std::endl;
            std::cout << "Website                               : " << Website << std::endl << std::endl;
            
        };

};

int main(void)
{
    std::cout << "=========================== ENTER IN MAIN FUNCTION =============================" << std::endl << std::endl;

    
    // Class 1
    PP_Basic_Info Basic_Info("M30X01", "Patek Philippe", "Nautilus", "5811/1G-001", 991454
                           , "Automatic", "White Gold", "White Gold", "Unknown", "Used(Very Good)\n\t\t\t\t\tThe item shows minor signs of wear,\n\t\t\t\t\tsuch as small, intangible scratches"
                           , "Original Box, Original Papers", "Men's Watch/Unisex", "Czech Republic, Praha 1"
                           , 158000, "Item needs to be procured");

            Basic_Info.display();

    // Class 2
    PP_Caliber Caliber("Automatic", "26-330 S C", 45 , 30);

            Caliber.display();

    // Class 3
    PP_Case Case("White Gold", 41, 10, "White Gold", "Sapphire Crystal", "Blue", "No Numerals");
    
            Case.display();

    // Class 4
    PP_Bracelet Bracelet("White Gold", "Fold clasp", "White Gold");

            Bracelet.display();

    // Class 5
    PP_Product_Safety Product_Safety("Watch", "5811/1G-001", "Patek Philippe", "Deutsche Patek Philippe GmbH", "Germany"
                                   , "Bienner Str. 12", "No Details", 80333, "Munchen", "No Details", "No Details"
                                   , "info.dpp@patek.com", "No Details");

            Product_Safety.display();

    std::cout << "=========================== LEAVING MAIN FUNCTION ==============================" << std::endl << std::endl;  

    return (0);
}