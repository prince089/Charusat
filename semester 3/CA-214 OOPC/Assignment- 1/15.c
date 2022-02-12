#include<stdio.h>
#include<stdlib.h>
struct employee{
    char ename[25];
    int age;
    int phn_no;
    int salary;


};
int main()
{
    system("cls");
    int n = 3;
// Array of structure objects
struct employee emp[5];

// Details of employee 1
emp[0].ename = "Chirag";
emp[0].age = 24;
emp[0].phn_no = 1234567788;
emp[0].salary = 20000;

// Details of employee 2
emp[1].ename = "Arnav";
emp[1].age = 31;
emp[1].phn_no = 1234567891;
emp[1].salary = 56000;

// Details of employee 3
emp[2].ename = "Shivam";
emp[2].age = 45;
emp[2].phn_no = 1100661111;
emp[2].salary = 30500;

display(emp, n);

return 0;




    system("pause");
}
