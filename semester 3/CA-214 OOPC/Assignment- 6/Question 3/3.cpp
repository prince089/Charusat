/*
Write a c++ program to enter string message from  User and append all the message to the file "message.txt" and read form this operations form the file.
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fio;
    string message;
    fio.open("message.txt",ios::app|ios::in);
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
    while(getline(fio,message))
    {
            cout<<message<<endl;
    }
    fio.close();
    return 0;
}
