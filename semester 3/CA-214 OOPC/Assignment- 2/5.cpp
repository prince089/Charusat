#include<iostream>
using namespace std;

int main(){

        int num1,num2;
        cout<<"\n enter first number ";
        cin>>num1;
        if(num1 < 0){

            cout<<"\n your number is nagative";
        }
        else if(num1 > 0){
            cout<<"\n your number is positive";
        }
        else{
            cout<<"\n your number is zero";
        }


    return 0;
}
