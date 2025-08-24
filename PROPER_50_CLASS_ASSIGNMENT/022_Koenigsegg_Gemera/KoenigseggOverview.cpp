#include "KoenigseggOverview.hpp"

Koenigsegg_Overview::Koenigsegg_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Model = _1;
            Launch = _2;
            Category = _3;
            Body = _4;
            Interior = _5;
        }

void Koenigsegg_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Launch/Production              : " << Launch << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Body & Doors                   : " << Body << endl;
    cout << "Interior Styling               : " << Interior << endl << endl;
}