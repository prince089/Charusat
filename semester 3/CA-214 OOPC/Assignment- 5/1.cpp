/*Write a C++ program to create a class Person with the attributes
name, gender, dob, create two methods getPersonDetails() and showPersonDetails().
Create a child class Student with the attributes id, programmename and semester,
create two methods getStudentDetails() and showStudentDetails().
Create an object of child class and get and show the Person and Student Details.
*/
#include<iostream>
using namespace std;
class person
{
public:
    string name;
    string gender;
    struct dob
    {
        int day;
        int month;
        int year;
    }db;
    void getPersonDetails()
    {
        cout<<"\nEnter Name of Person: ";
        cin>>name;
        cout<<"\nEnter Gender of Person";
        cin>>gender;
        cout<<"\n\nEnter Date of Birth of Person: ";
        cout<<"\nEnter Day: ";
        cin>>db.day;
        cout<<"\nEnter Month: ";
        cin>>db.month;
        cout<<"\nEnter Year: ";
        cin>>db.year;
    }
    void dispalyPersonDetails()
    {
       cout<<"\n\nName of Person: "<<name;
       cout<<"\nGender of Person: "<<gender;
       cout<<"\nDate of Birth of Person is: <"<<db.day<<"/"<<db.month<<"/"<<db.year<<">";
    }
};
class student : public person
{
public:
    int id;
    int sem;
    void getStudentDetails()
    {
        person::getPersonDetails();
        cout<<"\nEnter ID of Student: ";
        cin>>id;
        cout<<"\nEnter Semester of Student: ";
        cin>>sem;
    }
    void dispalyStudentDetails()
    {
        person::dispalyPersonDetails();
       cout<<"\n\nID of Student: "<<id;
       cout<<"\nSemester of Student: "<<sem;
    }
};
int main()
{
    student std_obj;
    std_obj.getStudentDetails();
    std_obj.dispalyStudentDetails();
    cout<<"\n\n";
	return 0;
}
