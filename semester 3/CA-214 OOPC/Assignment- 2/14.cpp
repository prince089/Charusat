#include<iostream>
using namespace std;

void palindrome(int arr[],int no);

int main(){


    int i,n;
        cout<<"\n enter how many number you want to enter ";
        cin>>n;
        int arr[n];

        for(i=0;i<n;i++){
        cout<<"\n enter your "<<i+1<<" number : ";
        cin>>arr[i];
      }

      palindrome(arr,n);



    return 0;
}


void palindrome(int arr[],int no){

    int i,s=0,r,t;

    for(i=0;i<no;i++){
         t=arr[i];


        while(arr[i]>0){


            r=arr[i]%10;
            s=s*10+r;
            arr[i]=arr[i]/10;
        }
        if(t == s){
            cout<<t<<" is palindrome number \n";
        }
        else
             cout<<t<<" is not palindrome number \n";

    }




}
