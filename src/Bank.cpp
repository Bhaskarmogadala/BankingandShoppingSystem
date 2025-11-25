int Bank :: verifyPassword()
{
    cout<<"Enter your password:"<<endl;
    cin>>CurrentPassword;
    if(SetPassword == CurrentPassword)
        return 1;
    return 0;
}
Bank :: Bank()
{
    Accno++;
    cout<<"Enter Aadhar number:"<<endl;
    cin.ignore();
    cin>>Aadharno;
    cout<<"Enter name of the Account holder:"<<endl;
    cin.ignore();
    getline(cin,Name);
    cout<<"Enter the house number:"<<endl;
    cin.ignore();
    getline(cin,b.Hno);
    cout<<"Enter the street:"<<endl;
    cin.ignore();
    getline(cin,b.street);
    cout<<"Enter the city:"<<endl;
    cin.ignore();
    getline(cin,b.city);
    cout<<"Enter the State:"<<endl;
    cin.ignore();
    getline(cin,b.state);
    cout<<"Enter the email id :"<<endl;
    cin.ignore();
    cin>>email;
    cout<<"Enter password to set:"<<endl;
    cin.ignore();
    cin>>SetPassword;
    cout<<"Enter amount to deposit:"<<endl;
    cin>>Balamt;
}
void Bank :: Bankmenu()
{
    cout<<"----Bank Menu----"<<endl;
    cout<<"1.Deposit 2.Withdraw 3.Balance enquiry 4.Proceed to shopping 5.exit"<<endl;
}
void Bank :: Deposit(float amount)
{
    if(verifyPassword())
    {
        Balamt+=amount;
        cout<<"Deposit successfull"<<endl;
    }
    else
        cout<<"Password is incorrect"<<endl;
}
void Bank :: withdraw(float amount)
{
    if(verifyPassword())
    {
        if(amount>Balamt)
            cout<<"Insufficient balance"<<endl;
        else
        {
            Balamt-=amount;
            cout<<"Withdraw successfull"<<endl;
        }
    }
    else
        cout<<"Incorrect Password"<<endl;
}
void Bank :: balenquiry()
{
    if(verifyPassword())
        cout<<"Balance amount is:"<<Balamt<<endl;
    else
        cout<<"Incorrect password"<<endl;
}
string Bank :: getPassword()
{
    return SetPassword;
}