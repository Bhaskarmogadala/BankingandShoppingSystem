#include<iostream>
#include "Bank.h"
#include "Shopping.h"
#include "Bank.cpp"
#include "Shopping.cpp"
#include "struct.h"
using namespace std;



bool billing(Bank &bobj,Shopping &sob)
{
    string pass;
    cout<<"Enter the pin:"<<endl;
    cin>>pass;
    if(pass==bobj.getPassword())
    {
        float tamount=sob.gettotalAmount();
        if(tamount>bobj.Balamt)
        {
            cout<<"Insufficient balance"<<endl;
            return 0;
        }
        else
        {
            bobj.Balamt-=tamount;
            cout<<"Billing successfull! Amount deducted is:"<<tamount<<endl;
            cout<<"Remaining Balance is:"<<bobj.Balamt<<endl;
            cout<<"Thank You For Shopping"<<endl;
            return 1;
        }
    }
    else
    {
        cout<<"Incorrect pin"<<endl;
        return 0;
    }
}


int main()
{
    Bank obj;
    Shopping sobj;
    while(1)
    {
        int ch;
        float amt;
        obj.Bankmenu();
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"Enter amount to deposit:"<<endl;
                   cin>>amt;
                   obj.Deposit(amt);
                   break;
            case 2:cout<<"Enter amount to withdraw:"<<endl;
                   cin>>amt;
                   obj.withdraw(amt);
                   break;
            case 3:obj.balenquiry();
                   break;
            case 4:int shopch;
                   do
                   {
                       sobj.shoppingmenu();
                       cin>>shopch;
                       switch(shopch)
                       {
                          case 1:sobj.addtocart();
                                 break;
                          case 2:sobj.viewcart();
                                 break;
                          case 3:sobj.deleteitem();
                                 break;
                          case 4:if(billing(obj,sobj))
                                 {
                                     sobj.setcartempty();
                                 }
                                 break;
                          case 5:cout<<"Exiting from the shopping"<<endl;
                                 break;
                          default:cout<<"Invalid choice"<<endl;
                       }
                   }while(shopch!=5);
                   break;
            case 5:exit(0);
            default:cout<<"Invalid choice"<<endl;
        }
    }
}