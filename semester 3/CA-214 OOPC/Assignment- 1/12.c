#include<stdio.h>
#include<stdlib.h>
struct student
{
int id;
char name[20];
float percentage;
};
struct student record; // Global declaration of structure

void structure_demo();

int main()
{
    system("cls");

    record.id=1;
strcpy(record.name, "Raju");
record.percentage = 86.5;

structure_demo();
return 0;



    system("pause");
}

void structure_demo()
{
printf(" Id is: %d \n", record.id);
printf(" Name is: %s \n", record.name);
printf(" Percentage is: %f \n", record.percentage);
}

