/*
Write a C++ program to create a class Bank with
method getCarLoanInterest() and getHouseLoanInterest(),
create a child class SBI, ICICI and HDFC.
The home loan interest is same in all the banks,
but car loan interest is different in all the banks,
for SBI it is 5%, for ICICI it is 10% and for HDFC it is 15%.
Ask user to input details of bank and
show the car and house loan interest accordingly.
(Hint : Use Abstract class )
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank
{
public:
    virtual int getCarLoan()=0;
    int getHouseLoan()
    {
        return 10;
    }
};
class SBI : public Bank
{
public:
    int getCarLoan()
    {
        return 5;
    }
};
class ICICI : public Bank
{
public:
    int getCarLoan()
    {
        return 10;
    }
};
class HDFC : public Bank
{
public:
    int getCarLoan()
    {
        return 15;
    }
};
int main()
{
    Bank *b1,*b2,*b3;
    SBI s1;
    ICICI i1;
    HDFC h1;

    b1=&s1;
    b2=&i1;
    b3=&h1;

    cout<<"\nCar Loan in SBI Bank is: "<<b1->getCarLoan();
    cout<<"\nHome Loan in SBI Bank is: "<<b1->getHouseLoan();

    cout<<"\n\nCar Loan in ICICI Bank is: "<<b2->getCarLoan();
    cout<<"\nHome Loan in SBI Bank is: "<<b2->getHouseLoan();

    cout<<"\n\nCar Loan in HDFC Bank is: "<<b3->getCarLoan();
    cout<<"\nHome Loan in SBI Bank is: "<<b3->getHouseLoan();
    return 0;
}
