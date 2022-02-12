/*
Write a C++ program to update the above program,
use parameterized constructor of child class to pass the values to parent constructor.
Show the details of both parent as well as child class attributes.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class person
{
    string name;
    char gender;
    string dob;
public:
    person(string name, char gender, string dob)
    {
        this->name=name;
        this->gender=gender;
        this->dob=dob;
    }
    void dispalyPersonDetails()
    {
        cout<<"\nName= "<<name;
        cout<<"\nGender= "<<gender;
        cout<<"\nDate Of Birth= "<<dob;
    }
};
class student : public person
{
    int id;
    int sem;
public:
    student(int id, int sem, string name, char gender, string dob): person {name,gender,dob}
    {
        this->id=id;
        this->sem=sem;
    }
    void displayStudentDetails()
    {
        person::dispalyPersonDetails();
        cout<<"\nID= "<<id;
        cout<<"\nSemester= "<<sem;
    }
};
int main()
{
    student s1(63,3,"SHIVAM",'M',"03-08-2001");
    s1.displayStudentDetails();
    return 0;
}
