/*
Write a C++ program to create a class Student with the attributes
id,name, and university with the methods getDetails() and showDetails(),
create a class NSSMember with the attributes unitname, eventname and eventdate.
Create a class UGStudent with the attributes programmename and semester,
derive it from the class Student and NSSMember.
Create an object of child class, get and show the detail of UGStudent.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
    int id;
    string name;
    string university_name;
public:
    void getDetails()
    {
        cout<<"\nEnter ID of Student: ";
        cin>>id;
        cout<<"\nEnter Name of Student: ";
        cin>>name;
        cout<<"\nEnter Name of University: ";
        cin>>university_name;
    }
    void showDetails()
    {
        cout<<"\n\n\nStudent ID is: "<<id;
        cout<<"\nName of Student is: "<<name;
        cout<<"\nName of University is: "<<university_name;
    }
};
class NSSMember
{
    string unitname;
    string eventname;
    struct edate
    {
        int day;
        int month;
        int year;
    }ed;
public:
    void getDetails()
    {
        cout<<"\nEnter Unit name of NSS Member: ";
        cin>>unitname;
        cout<<"\nEnter Event name: ";
        cin>>eventname;
        cout<<"\nEnter Event date: \n";
        cout<<"Enter Day of Event: ";
        cin>>ed.day;
        cout<<"\nEnter month of Event: ";
        cin>>ed.month;
        cout<<"\nEnter Year of Event: ";
        cin>>ed.year;
    }
    void showDetails()
    {
        cout<<"\n\n\nUnit name of NSS Member is: "<<unitname;
        cout<<"\nEvent name: "<<eventname;
        cout<<"\n\nDate of Event is: < "<<ed.day<<" / "<<ed.month<<" / "<<ed.year<<" >";
    }
};
class UGStudent : public student, public NSSMember
{
    string program_name;
    int sem;
public:
    void getDetails()
    {
        student::getDetails();
        NSSMember::getDetails();
        cout<<"\nEnter Program name of Student: ";
        cin>>program_name;
        cout<<"\nEnter Semester: ";
        cin>>sem;
    }
    void showDetails()
    {
        student::showDetails();
        NSSMember::showDetails();
        cout<<"\n\n\nProgram name is: "<<program_name;
        cout<<"\nSemester is: "<<sem;
    }
};
int main()
{
    UGStudent Uobj;
    Uobj.getDetails();
    Uobj.showDetails();
    cout<<"\n\n\n";
    return 0;
}
