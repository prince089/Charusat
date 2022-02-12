#include<iostream>

using namespace std;

int cube(int no);

int main(){


    int no,ans;
    cout<<"\n enter your number";
    cin>>no;
    ans=cube(no);
    cout<<"\n cube of your number is : "<<ans;
    return 0;
}

int cube(int no){

    int ans;
    ans=no*no*no;
    return ans;


}

