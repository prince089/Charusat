/*Update the above program,
rename the methods as getDetails() and showDetails() in parent as well as child class.
Create an object of child class and get and show the Person and Student Details.*/
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
        cout<<"\nDate of Birth: <"<<db.day<<"/"<<db.month<<"/"<<db.year<<">";
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
int main()
{
    student s1;
    s1.getDetails();
    s1.showDetails();
    return 0;
}
