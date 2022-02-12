/*
Write a C++ program to create a class Person and Student
with the above members,
create a class UGStudent from the class Student to hold the attributes
as tenthclass and twelthclass,
with the methods getDetails() and showDetails().
Create an object of child class and get and show the details of Person,
Student and UGStudent.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class person
{
    string name;
    char gender;
    struct dob
    {
        int day;
        int month;
        int year;
    }db;
public:
    void getDetails()
    {
        cout<<"\n\nEnter Name of Person: ";
        cin>>name;
        cout<<"\nEnter Gender of Person: ";
        cin>>gender;
        cout<<"\n\nEnter Date of Birth: ";
        cout<<"\nEnter Day of Birth: ";
        cin>>db.day;
        cout<<"\nEnter Month of Birth: ";
        cin>>db.month;
        cout<<"\nEnter Year of Birth: ";
        cin>>db.year;
    }
    void showDetails()
    {
        cout<<"\n\n\nName: "<<name;
        cout<<"\nGender: "<<gender;
        cout<<"\nDate of Birth: <"<<db.day<<"/"<<db.month<<"/"<<db.year<<">";

    }
};
class student : public person
{
   int id;
   int sem;
public:
       void getDetails()
       {
            person::getDetails();
            cout<<"\nEnter ID of Student: ";
            cin>>id;
            cout<<"\nEnter Semester of Student: ";
            cin>>sem;
       }
       void showDetails()
        {
            person::showDetails();
            cout<<"\n\n\nID: "<<id;
            cout<<"\nSemester: "<<sem;
        }
};
class UGStudent : public student
{
    string tenthClass;
    string twelthClass;
public:
    void getDetails()
    {
        student::getDetails();
        cout<<"\nEnter Passing Class of Tenth Standard: ";
        cin>>tenthClass;
        cout<<"\nEnter Passing Class of Twelve Standard: ";
        cin>>twelthClass;
    }
    void showDetails()
    {
        student::showDetails();
        cout<<"\nPassing Class of Tenth Standard: "<<tenthClass;
        cout<<"\nPassing Class of Twelve Standard: "<<twelthClass<<"\n\n";
    }
};
using namespace std;
int main()
{
    UGStudent U1;
    U1.getDetails();
    U1.showDetails();
    return 0;
}
