#include<iostream>
using namespace std;

int main(){

      int n,i;
      bool flag=false;
      cout<<"\n enter your number ";
      cin>>n;
      for(i=2;i<n;i++){
        if(n%i == 0){

            flag=true;
            break;
        }
      }
    if(flag == false)
        cout<<"prime";
    else
        cout<<"not prime";

    return 0;
}
