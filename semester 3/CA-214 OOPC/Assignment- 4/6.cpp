#include<iostream>
using namespace std;

class update{

    int n=10,no;
public:
    update(int no){
        n=no;
    }

    void operator !(){
         int f=1;

        for(int i=1;i<=n;i++){

            f=f*i;

        }
        cout<<"\n factorial  :"<<f;


    }

};

int main(){
    update u1(2);
    !u1;


}
