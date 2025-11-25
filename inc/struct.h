#include<iostream>
using namespace std;
#ifndef STRUCT_H
#define STRUCT_H

typedef struct
{
   string Hno,street,city,state,pincode;
}address;

typedef struct
{
    string name;
    float price;
    int quantity;
}shop;

#endif