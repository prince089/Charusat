#include<iostream>
using namespace std;
void prime(int arr[],int n);

int main(){

      int n,i;

      cout<<"\n enter how many number you want to enter ";
      cin>>n;
      int arr[n];

      for(i=0;i<n;i++){
        cout<<"\n enter your "<<i+1<<" number : ";
        cin>>arr[i];
      }

      prime(arr,n);



    return 0;
}

void prime(int arr[],int n){
    bool flag=false;
    int i;

     for(int j=0;j<n;j++){
        flag=false;

      for(i=2;i<arr[j];i++){
        if(arr[j]%i == 0){

            flag=true;
            break;
        }
      }


    if(flag == false)
        cout<<arr[j]<<" is prime \n";
    else
        cout<<arr[j]<<" not prime\n";
      }

}

