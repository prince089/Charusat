/*
write a program to read from the student.txt
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    string name;
    fin.open("Students.txt");
    if(!fin)
        cout<<"Error in opening a file";
    else
    {
        while(getline(fin,name))
        {
            cout<<name<<endl;
        }
        fin.close();
    }
}
