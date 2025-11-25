Banking and Shopping System – Mini Project in C++

PROJECT OVERVIEW :

This Mini Project simulates a simple Banking System integrated with a Shopping Cart System using C++.
It allows a user to create a bank account, deposit/withdraw money, and purchase items through a shopping cart.
The total shopping amount is finally deducted from the bank account after password verification.

FEATURES :

1. Banking System

Create a bank account with:

Account Number

Name

Password

Address (houseNo, street, city, state, pincode)

Email

Initial Balance

Banking operations:

Deposit money

Withdraw money

Balance enquiry

Password verification internally before any sensitive operation

2. Shopping Cart System

Add products (name, price, quantity)

Stores up to 20 items

View all products in cart

Delete/remove items

Calculates total bill

Billing deducts the amount from the bank account (password required)

Friend functions :

billing(Shopping &shop, Bank &bank, const string &pass)

FILES :

Bank.cpp
Shopping.cpp
Bank.h
Shopping.h
struct.h
BankShoppingApp.cpp


REQUIREMENTS :

C++ Compiler (g++, MinGW, GCC)

Basic knowledge of classes, objects, and friend functions

HOW TO COMPILE :

$ gcc BankShoppingApp.cpp

HOW TO RUN :

$ ./a.out

SAMPLE OUTPUT :

Welcome to the Bank & Shopping System

--- Bank Menu ---
1. Deposit
2. Withdraw
3. Balance Enquiry
4. Proceed to Shopping
Enter your choice: 4

--- Shopping Menu ---
1. Add to Cart
2. View Cart
3. Delete Item
4. Billing

Adding item: Shampoo, Price: 200, Quantity: 2
Item added successfully.

Adding item: Soap, Price: 50, Quantity: 5
Item added successfully.

FUTURE ENHANCEMENTS :

1.Online Banking Simulation
2.Database Integration
3.Advanced Shopping Features
4.Transaction History
5.Improved Password Security

