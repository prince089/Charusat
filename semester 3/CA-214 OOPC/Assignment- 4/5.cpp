#include<iostream>
using namespace std;

class update{

    int n=10;
public:
    update(int no){
        n=no;
    }

    void operator ++(){
        n=n+2;

        cout<<"\n n :"<<n;


    }
    void operator --(){
        n=n-2;
        cout<<"\n n :"<<n;
    }
    void operator -(){
        n=-n;
        cout<<"\n n :"<<n;
    }

};

int main(){
    update u1(10),u2(10),u3(10);
    ++u1;
    --u2;
    -u3;


}
