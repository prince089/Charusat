/*
Write a C++ program to create a class Employee
with attributes employee id, name, designation and salary,
create the members functions to input and display the values.
Create a file employee and write the object in to the file
and then read the object from the file.
*/
#include<iostream>
#include<fstream>
using namespace std;
class employee
{
    int id,salary;
    string designation,name;
public:
    void getData()
    {
        cout<<"\nEnter id: ";cin>>id;
        fflush(stdin);
        cout<<"\nEnter name: ";getline(cin,name);
        cout<<"\nEnter Designation: ";getline(cin,designation);
        cout<<"\nEnter Salary: ";cin>>salary;
    }
    void showData()
    {
        cout<<"\nid: "<<id;
        cout<<"\nname: "<<name;
        cout<<"\nDesignation: "<<designation;
        cout<<"\nSalary: "<<salary;
    }
};
int main()
{
    fstream fio;
    employee emp;
    fio.open("Employee.txt",ios::out|ios::in);
    emp.getData();
    emp.showData();
    cout<<"\n\n\n";
    fio.write((char *)&emp,sizeof(emp));
    fio.read((char *)&emp,sizeof(emp));
    emp.showData();
    fio.close();
    return 0;
}
