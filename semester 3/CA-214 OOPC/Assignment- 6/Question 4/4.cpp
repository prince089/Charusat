/*
Write a c++ program to create menu driven program,
1. write into file
2.read from the file
3.exit
ask user to perform this operation for the file "sample.txt"
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fio;
    int choice;
    fio.open("Sample.txt",ios::out|ios::app|ios::in);
    cout<<"--------\tSelect One\t--------";
    cout<<"\n\n\t1.Write into file.\n\t2.Read from the file.\n\tExit\n\n\t";
    cin>>choice;
    string message;
    switch (choice)
    {
    case 1:
        {
            if(!fio)
            {
                cout<<"Error while Opening In File";
            }
            else
            {
                while(getline(cin,message))
                {
                    fio<<message<<endl;
                }
            }
        }
    case 2:
        {
             while(getline(fio,message))
                {
                        cout<<message<<endl;
                }
        }
    case 3:
        {
            return 0;
        }
    default:
        {
            cout<<"\n\nEnter valid choice";
        }
    }
    return 0;
}
