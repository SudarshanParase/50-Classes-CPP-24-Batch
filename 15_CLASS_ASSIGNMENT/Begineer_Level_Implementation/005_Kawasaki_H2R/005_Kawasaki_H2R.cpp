// Header File Inclusion
#include <iostream>
#include <string>

class H2R_Overview
{
    private:
        std::string Engine;     // 1
        short int Displacement; // 2
        float Seat_Height;      // 3
        float Curb_Weight;      // 4
        float Fuel_Capacity;    // 5

    public:
        H2R_Overview(std::string _1, short int _2, float _3, float _4, float _5)
        {
            Engine = _1;
            Displacement = _2;
            Seat_Height = _3;
            Curb_Weight = _4;
            Fuel_Capacity = _5;
        };

        void display()
        {
            std::cout << "---------------------------- O V E R V I E W ----------------------------" << std::endl << std::endl;
            std::cout << "Engine                            : " << Engine << std::endl;
            std::cout << "Dispalcement                      : " << Displacement << "cc" << std::endl;
            std::cout << "Seat Height                       : " << Seat_Height << " in" << std::endl;
            std::cout << "Curb Weight                       : " << Curb_Weight << " lb*" << std::endl;
            std::cout << "Fuel Capacity                     : " << Fuel_Capacity << " gal" << std::endl << std::endl;
            
         };

};

class H2R_Power
{
    private:
        std::string Engine;                 // 1
        std::string Displacement;           // 2
        short int Stroke;                   // 3
        std::string Max_Horsepower;         // 4
        std::string Max_Torque;             // 5
        std::string Fuel_System;            // 6
        std::string Ignition;               // 7
        std::string Transmission;           // 8
        std::string Final_Drive;            // 9
        std::string Electronic_Rider_AIDS;  // 10

    public:
        H2R_Power(std::string _1, std::string _2, short int _3
                , std::string _4, std::string _5, std::string _6
                , std::string _7, std::string _8, std::string _9
                , std::string _10)
        {
            Engine = _1;
            Displacement = _2;
            Stroke = _3;
            Max_Horsepower = _4;
            Max_Torque = _5;
            Fuel_System = _6;
            Ignition = _7;
            Transmission = _8;
            Final_Drive = _9;
            Electronic_Rider_AIDS = _10;
        };

        void display()
        {
            std::cout << "------------------------------ P O W E R --------------------------------" << std::endl << std::endl;
            std::cout << "Engine                            : " << Engine << std::endl;
            std::cout << "Displacement                      : " << Displacement << std::endl;
            std::cout << "Bore X Stroke                     : " << Stroke << "cc" << std::endl;
            std::cout << "Maximum Horsepower                : " << Max_Horsepower << std::endl;
            std::cout << "Maximum Torque                    : " << Max_Torque << std::endl;
            std::cout << "Fuel System                       : " << Fuel_System << std::endl;
            std::cout << "Ignition                          : " << Ignition << std::endl;
            std::cout << "Transmission                      : " << Transmission << std::endl;
            std::cout << "Final Drive                       : " << Final_Drive << std::endl;
            std::cout << "Electronic Rider AIDS             : " << Electronic_Rider_AIDS << std::endl << std::endl;
            
        };
};

class H2R_Performance
{
    private:
        std::string Front_Suspension;   // 1
        std::string Rear_Suspension;    // 2
        std::string Front_Tire;         // 3
        std::string Rear_Tire;          // 4
        std::string Front_Brakes;       // 5
        std::string Rear_Brakes;        // 6

    public:
        H2R_Performance(std::string _1, std::string _2, std::string _3
                      , std::string _4, std::string _5, std::string _6)
        {
            Front_Suspension = _1;
            Rear_Suspension = _2;
            Front_Tire = _3;
            Rear_Tire = _4;
            Front_Brakes = _5;
            Rear_Brakes = _6;
        };

        void display()
        {
            std::cout << "--------------------------- P E R F O R M A N C E -------------------------" << std::endl << std::endl;
            std::cout << "Front Suspension / Wheel Travel   : " << Front_Suspension << std::endl;
            std::cout << "Rear Suspension / Wheel Travel    : " << Rear_Suspension << std::endl;
            std::cout << "Front Tire                        : " << Front_Tire << std::endl;
            std::cout << "Rear Tire                         : " << Rear_Tire << std::endl;
            std::cout << "Front Brakes                     : " << Front_Brakes << std::endl;
            std::cout << "Rear Brakes                      : " << Rear_Brakes << std::endl << std::endl;
        };
};

class H2R_Details
{
    private:
        std::string Frame_Type;         // 1
        std::string Rake;               // 2
        std::string Length;             // 3
        std::string Width;              // 4
        float Height;                   // 5
        float Ground_Clearance;         // 6
        float Seat_Height;              // 7
        float Dry_Weight;               // 8
        float Curb_Weight;              // 9
        float Fuel_Capacity;            // 10
        float Wheelbase;                // 11
        float Special_Features;         // 12
        float Color_Choices;            // 13

    public:
        H2R_Details(std::string _1, std::string _2, std::string _3
                  , std::string _4, float _5, float _6
                  , float _7, float _8, float _9, float _10
                  , float _11, float _12, float _13)
        {
            Frame_Type = _1;
            Rake = _2;
            Length = _3;
            Width = _4;
            Height = _5;
            Ground_Clearance = _6;
            Seat_Height = _7;
            Dry_Weight = _8;
            Curb_Weight = _9;
            Fuel_Capacity = _10;
            Wheelbase = _11;
            Special_Features = _12;
            Color_Choices = _13;
        };

        void display()
        {
            std::cout << "--------------------------- D E T A I L S -----------------------------" << std::endl << std::endl;
            std::cout << "Frame Type                        : " << Frame_Type << std::endl;
            std::cout << "Rake/Trail                        : " << Rake << std::endl;
            std::cout << "Overall Length                    : " << Length << std::endl;
            std::cout << "Overall Width                     : " << Width << std::endl;
            std::cout << "Overall Height                    : " << Height << " in" << std::endl;
            std::cout << "Ground Clearance                  : " << Ground_Clearance << " in" << std::endl;
            std::cout << "Seat Height                       : " << Seat_Height << " in" << std::endl;
            std::cout << "Dry Weight                        : " << Dry_Weight << " in" << std::endl;
            std::cout << "Curb Weight                       : " << Curb_Weight << " in" << std::endl;
            std::cout << "Fuel Capacity                     : " << Fuel_Capacity << " in" << std::endl;
            std::cout << "Wheelbase                         : " << Wheelbase << " in" << std::endl;
            std::cout << "Special Features                  : " << Special_Features << " in" << std::endl;
            std::cout << "Color Choices                     : " << Color_Choices << " in" << std::endl << std::endl;
        };
};


int main(void)
{
    std::cout << "======================== K A W A S A K I  H 2 R ============================" << std::endl;
    H2R_Overview Overview("4-stroke, in-line 4-cylinder, DOHC, 16-valve, liquid-cooled", 998, 32.7, 476.3, 4.5);

            Overview.display();


    H2R_Power Power("4-stroke, in-line 4-cylinder, DOHC,\n\t\t\t\t\t16-valve, liquid-cooled", "4-stroke, in-line 4-cylinder,\n\t\t\t\t\tDOHC, 16-valve, liquid-cooled"
                  , 998, "76.0 x 55.0mm", "76.0 x 55.0mm", "8.3:1", "8.3:1", "321.5 hp1 @ 14,000 rpm", "321.5 hp1 @ 14,000 rpm", "121.5 lb-ft @ 12,500 rpm");

            Power.display();

    
    H2R_Performance Performance("43mm inverted Kayaba AOS-II fork with adjustable\n\t\t\t\t\trebound and compression damping, spring preload\n\t\t\t\t\tadjustability and top-out springs/4.7 in"
                              , "43mm inverted Kayaba AOS-II fork with adjustable\n\t\t\t\t\trebound and compression damping, spring preload\n\t\t\t\t\tadjustability and top-out springs/4.7 in"
                              , "Uni-Trak(R), Ohlins TTX36 gas-charged shock with piggyback\n\t\t\t\t\treservoir, 30-way compression and rebound damping\n\t\t\t\t\tadjustability, 16-way spring preload adjustability,\n\t\t\t\t\tand top-outspring/5.3 in"
                              , "Uni-Trak(R), Ohlins TTX36 gas-charged shock with piggyback\n\t\t\t\t\treservoir, 30-way compression and rebound damping\n\t\t\t\t\ttadjustability, 16-way spring preload adjustability,\n\t\t\t\t\tand top-outspring/5.3 in"
                              , "120/60-17 V01F slick", "120/60-17 V01F slick");

            Performance.display();


    H2R_Details Details("Trellis, high-tensile steel, with swingarm\n\t\t\t\t\tmounting plate", "25.1(o)/4.3 in", "25.1(o)/4.3 in", "25.1(o)/4.3 in"
                      , 81.5, 81.5, 33.5, 33.5, 45.7, 45.7, 5.1, 5.1, 32.7);

            Details.display();

    return (0);
}