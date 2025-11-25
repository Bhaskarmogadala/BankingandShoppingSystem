#include<iostream>
#include "struct.h"
using namespace std;
class Shopping;//forward declaration
class Bank
{
    static long long int Accno;
    float Balamt;
    string Aadharno,Name,Password,email,SetPassword,CurrentPassword;
    address b;
    int verifyPassword();
    public:
            Bank();
            void Bankmenu();
            void Deposit(float amount);
            void withdraw(float amount);
            void balenquiry();
            string getPassword();
            friend bool billing(Bank &,Shopping &);
};
long long int Bank::Accno=12345;