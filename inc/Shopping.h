#include<iostream>
#include "struct.h"
using namespace std;
class Shopping
{
    shop a[20];
    static int totalitems;
    float totalamount=0;
    public:
    void shoppingmenu();
    void addtocart();
    void viewcart();
    void deleteitem();
    void setcartempty();
    float gettotalAmount();
    friend class bank;
};
int Shopping::totalitems=0;