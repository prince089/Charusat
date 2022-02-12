#include<iostream>
using namespace std;

class printdata{


public:
    void print(int a){
        cout<<"\n your number is : "<<a;
    }

    void print(double a){
        cout<<"\n your double number is : "<<a;
    }

     void print(string a){
        cout<<"\n your string is : "<<a;
    }



};

int main(){
    printdata a1(5);
    a1.print(5);
}
