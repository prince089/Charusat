
#include<iostream>
using namespace std;

class printdata{


public:
    void print(int a,int b){
        cout<<"\n your number is : "<<a;
        cout<<"\n your number is : "<<b;
    }

    void print(double a,double b){
        cout<<"\n your double number is : "<<a;
        cout<<"\n your double number is : "<<b;

    }

     void print(string a,string b){
        cout<<"\n your string is : "<<a;
         cout<<"\n your string is : "<<b;
    }

    void print(int a,int b,int c){
        cout<<"\n your number is : "<<a;
        cout<<"\n your number is : "<<b;
        cout<<"\n your number is : "<<c;

    }

};

int main(){
    printdata a1;
    a1.print(5,4);
}
