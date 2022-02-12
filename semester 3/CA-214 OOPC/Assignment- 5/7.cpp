/*
Write a C++ program to create the below classes with given attributes
            Student (id,name,pname,sem)
UGStudent                           PGStudent
tenthclass,twelthclass              graduationclass
                    StudentPlacement
                    companyname,eligibility
Create the methods getDetails() and setDetails() in all the classes
to retrieve and display the attributes of each class.
Create a method isEligible() in the Placement class,
and show the whether the student is eligible for placement in the given company.
*/
#include<iostream>
using namespace std;
class student
{
    int id;
    string name;
    string pro_name;
    int sem;
public:
    void virtual getDetails()
    {
        cout<<"\n\nEnter ID of Student: ";
        cin>>id;
        cout<<"\nEnter Name of Student: ";
        cin>>name;
        cout<<"\nEnter Program name of Student: ";
        cin>>pro_name;
        cout<<"\nEnter Semester of Student: ";
        cin>>sem;
    }
    void virtual showDetails()
    {
        cout<<"\n\n\nID of Student is: "<<id;
        cout<<"\nName of Student is: "<<name;
        cout<<"\nProgram Name of Student is: "<<pro_name;
        cout<<"\nSemester of Student is: "<<sem;
    }
};
class UGStudent : virtual public student
{
    string tenthClass;
    string twelthClass;
public:
    void getDetails()
    {
        cout<<"\nEnter Passing Class of Tenth Standard: ";
        cin>>tenthClass;
        cout<<"\nEnter Passing Class of Twelve Standard: ";
        cin>>twelthClass;
    }
    void showDetails()
    {
        cout<<"\n\n\nPassing Class of Tenth Standard: "<<tenthClass;
        cout<<"\nPassing Class of Twelve Standard: "<<twelthClass<<"\n\n";
    }
};
class PGStudent : virtual public student
{
    string ugclass;
public:
    void getDetails()
    {
        cout<<"\nEnter Passing Class of Graduation: ";
        cin>>ugclass;
    }
    void showDetails()
    {
        cout<<"\n\n\nPassing Class of Graduation is: "<<ugclass;
    }
};
class StudentPlacement : public UGStudent , public PGStudent
{
    string companyname,eligibility;
public:
    void getDetails()
    {
        cout<<"\nEnter Name of Company: ";
        cin>>companyname;
        cout<<"\nEnter Eligible Class of placement: ";
        cin>>eligibility;
    }
    void showDetails()
    {
        cout<<"\n\n\nName of Company is: "<<companyname;
        cout<<"\nEligible class of Placement is: "<<eligibility;
    }
    bool isEligible()
    {
        bool step=true;
        if (eligibility=="fail")
            return false;
        else
            return step;
    }
};
int main()
{
    student *stud1,*stud2,*stud3;

    UGStudent u1;
    PGStudent p1;
    StudentPlacement sp;

    stud1=&u1;
    stud2=&p1;
    stud3=&sp;

    stud1->getDetails();
    stud1->showDetails();

    stud2->getDetails();
    stud2->showDetails();

    stud3->getDetails();
    stud3->showDetails();
    return 0;
}
