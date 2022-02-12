/*
Write a C++ program to create a class Car with method getNumberofSeats(),
derive a child class Innova (7 seater) , Alto (4 seater) , Amaze (5 seater)
and implement the getNumberofSeats() method in each class.
Invoke the method based on the object. (Hint : Use Abstract class)
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class car
{
public:
    virtual void getNumberofSeats()=0;
};
class Innova : public car
{
public:
    void getNumberofSeats()
    {
        cout<<"\n\nNumber of Seats in Innova is: 7";
    }
};
class Alto : public car
{
public:
    void getNumberofSeats()
    {
        cout<<"\n\nNumber of Seats in Alto is: 4";
    }
};
class Amaze : public car
{
public:
    void getNumberofSeats()
    {
        cout<<"\n\nNumber of Seats in Amaze is: 5";
    }
};
int main()
{
    car *cptr1,*cptr2,*cptr3;
    Innova i;
    Alto a;
    Amaze a1;

    cptr1=&i;
    cptr2=&a;
    cptr3=&a1;

    cptr1->getNumberofSeats();
    cptr2->getNumberofSeats();
    cptr3->getNumberofSeats();
    cout<<"\n\n";
    return 0;
}
