#include<iostream>
using namespace std;

int main()
{
    int arr[5],i,m=0;

    cout<<"\n enter arry element number";

    for(i=0;i<5;i++){

        cout<<"\nenter your "<< i+1 <<" number ";
        cin>>arr[i];
        if(m < arr[i])
            m=arr[i];
    }
     m=arr[0];

     for(i=0;i<5;i++){
        if(m < arr[i])
            m=arr[i];
    }
    cout<<"\n your max number is "<< m;





}
