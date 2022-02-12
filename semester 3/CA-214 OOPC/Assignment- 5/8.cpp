/*
Write a C++ program to Create the class Calculator,
to implement the different operations of Standard Calculator as below,
add,multiply,divide,subtract two numbers either integer or real,
Create a class Scientific which inherits class Calculator,
implement the different operations of Scientific Calculator as below,
findPower(x,y) ( to support the functions as x2,x^y,10x )
Create an object of child class and perform the operations.
(Use function overloading and overriding wherever applicable.)
*/
#include<iostream>
#include<cmath>
using namespace std;


class Calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }

    int subtract(int a,int b)
    {
        return a-b;
    }

    int multiply(int a,int b)
    {
        return a*b;
    }

    int divide(int a,int b)
    {
        return a/b;
    }

};

class Scientific: public Calculator
{
    public:
    double findPower(int x,int y)
    {
         int i,product=1;

            for(i=1;i<=y;i++)
            {
                product=product*x;
            }

                return product;
        return pow(x,y);
    }
};




int main()
{
    Scientific s;
    cout<<"\n Addition is : "<<s.add(3,5);
    cout<<"\n 10 raised to 3 :"<<s.findPower(10,3);

    return 0;
}
