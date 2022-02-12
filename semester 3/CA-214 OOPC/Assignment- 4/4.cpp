#include<iostream>
using namespace std;

class update{

    int n=10;
public:
    update(int no){
        n=no;
    }

    void operator ++(){
        n=n+5;

        cout<<"\n n :"<<n;


    }

};

int main(){
    update u1(10);
    ++u1;


}
