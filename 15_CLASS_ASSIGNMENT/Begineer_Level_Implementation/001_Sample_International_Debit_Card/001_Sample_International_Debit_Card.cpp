// Header file Inclusion
#include <iostream>
#include <string>

class DC_Date
{
    private:
        int month;
        int year;
    public:
        DC_Date(int _month, int _year)
        {
            this->month = _month;
            this->year = _year;
        }

        void show()
        {
            std::cout << "------------ENTER IN DC_Date::show()-------------" << std::endl;
            std::cout << this->month << "/" << this->year << std::endl;
            std::cout << "------------LEAVING DC_Date::show()--------------" << std::endl;
        }
};
class DebitCard
{
    private:
        std::string Bank_Name;
        long long Debit_Card_No;
        unsigned long Debit_Card_Cvv;
       // DC_Date Valid_From;
       // DC_Date Valid_Thru;

    public:
        DebitCard(std::string _Bank_Name,long long _Debit_Card_No
                 ,unsigned long _Debit_Card_Cvv)
                 {
                    this->Bank_Name = _Bank_Name;
                    this->Debit_Card_No = _Debit_Card_No;
                    this->Debit_Card_Cvv = _Debit_Card_Cvv;
                 }
        
        void show()
        {
            std::cout << "----------ENTER IN DebitCard::show()-------------" << std::endl;
            
            std::cout << "-------------------Bank Name---------------------" << std::endl;
            std::cout << "--------------" << Bank_Name << "----------------"<< std::endl;
            std::cout << "Card Number : " << Debit_Card_No << std::endl;
            std::cout << "CVV         : " << Debit_Card_Cvv << std::endl;
            
            
            std::cout << "Valid From  : " << std::endl;
            DC_Date Valid_From(12, 2024);
            Valid_From.show();
            

            std::cout << "Valid Thru  : " << std::endl;
            DC_Date Valid_Thru(12, 2028);
            Valid_Thru.show();
            
            std::cout << "----------LEAVING DebitCard::show()--------------" << std::endl;
        }
};

int main()
{
    std::cout << "=================ENTER IN MAIN()=================" << std::endl;
    DebitCard myCard("Bank of Maharashtra", 193224423422, 123);

    myCard.show();
    std::cout << "================LEAVING THE MAIN()===============" << std::endl;
    return (0);
    
}