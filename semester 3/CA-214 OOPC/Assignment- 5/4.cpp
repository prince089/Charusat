/*
Write a C++ program to create a class Person and Student with the above members,
create a class Faculty with attributes faculty id, institute name and designation,
add methods as getDetails() and showDetails(),
derive it from the class Person and get and show the Person and Student
and Faculty Details.
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
        cout<<"\nName: "<<name;
        cout<<"\nGender: "<<gender;
        cout<<"\n\nDate Of Birth: ";
        cout<<"\nDay: \t"<<db.day;
        cout<<"\nMonth: \t"<<db.month;
        cout<<"\nYear: \t"<<db.year<<"\n";
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
            cout<<"\n\nEnter ID of Student: ";
            cin>>id;
            cout<<"\nEnter Semester of Student: ";
            cin>>sem;
       }
       void showDetails()
        {
            person::showDetails();
            cout<<"\nID= "<<id;
            cout<<"\nSemester= "<<sem;
        }
};
class faculty : public person
{
    int faculty_id;
    string institute_name;
    string designation;
public:
    void getDetails()
    {
        person::getDetails();
        cout<<"\nEnter Faculty Id: ";
        cin>>faculty_id;
        cout<<"\nEnter Name of Institute: ";
        cin>>institute_name;
        cout<<"\nEnter Designation Of Faculty: ";
        cin>>designation;
    }
    void showDetails()
    {
        person::showDetails();
        cout<<"\nFaculty Id: "<<faculty_id;
        cout<<"\nEnter Name of Institute: "<<institute_name;
        cout<<"\nEnter Designation Of Faculty: "<<designation;
    }
};
int main()
{
    faculty f1;
    student s1;
    f1.getDetails();
    f1.showDetails();
    cout<<"\n\n\n";
    s1.getDetails();
    s1.showDetails();
    cout<<"\n\n\n";
    return 0;
}
