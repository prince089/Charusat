#include<iostream>
using namespace std;

int main()
{
    int arr[5],i,sum=0;

    cout<<"\n enter arry element number";

    for(i=0;i<5;i++){

        cout<<"\nenter your "<< i+1 <<" number ";
        cin>>arr[i];
        sum=sum+arr[i];
    }


    cout<<"\n sum of 5 num is : "<<sum;
}
