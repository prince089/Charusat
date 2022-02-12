/*
Write a program to create a file and write "n"students name in Student.txt
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fio;
	string name;
	fio.open("Students.txt");
	if(!fio)
    {
        cout<<"cant Open File";
    }
    else
    {
        while(getline(cin,name))
        {
            fio<<name<<endl;
        }
    }
    fio.close();
	return 0;
}
