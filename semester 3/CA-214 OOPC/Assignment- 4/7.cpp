#include<iostream>
using namespace std;

class opretion{
    int n,sum,sub;
public:
    opretion(){
        n=10;
    }

    opretion(int i){
        n=i;
    }

    void operator +(opretion a){

        sum=n+a.n;
        cout<<"\n addition of your number is : "<<sum;
    }

    void operator -(opretion a){

        sub=n-a.n;
        cout<<"\n substraction  of your number is : "<<sub;
    }


};


int main(){
    opretion o1(10),o2(8);
    o1+o2;
    o1-o2;
}
