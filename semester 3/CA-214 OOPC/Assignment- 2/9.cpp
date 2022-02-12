#include<iostream>
using namespace std;

int main(){

        int sum=0,arr[5];
        for(int i=0;i<5;i++){

        cout<<"\nenter your "<< i+1 <<" number ";
        cin>>arr[i];
        if(arr[i]%2 != 0)
             sum=sum+arr[i];

        }

        cout<<"\n the sum of odd number is "<<sum;



    return 0;
}
