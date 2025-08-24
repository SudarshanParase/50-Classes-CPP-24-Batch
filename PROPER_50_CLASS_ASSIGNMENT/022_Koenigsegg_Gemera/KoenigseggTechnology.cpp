#include "KoenigseggTechnology.hpp"

Koenigsegg_Technology::Koenigsegg_Technology
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Driver = _1;
            Navigation = _2;
            Airbags = _3;
            Unique = _4;
        }

void Koenigsegg_Technology::show()
{
     using std::cout;
    using std::endl;

    cout << "-------------------- T E C H N O L O G Y   &   S A F E T Y --------------------" << endl << endl;

    cout << "Dirver Aids                    : " << Driver << endl;
    cout << "Navigation & Connectivity      : " << Navigation << endl;
    cout << "Airbags                        : " << Airbags << endl;
    cout << "Unique Engineering             : " << Unique << endl << endl;
}