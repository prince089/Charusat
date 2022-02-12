#include<iostream>
using namespace std;
class comlex{
    float real,img;

public:
    complex(){
        real=img=0;
    }

    void input(){
        cout<<"\n enter your real number : ";
        cin>>real;
        cout<<"\n enter your imaganry number : ";
        cin>>img;
    }


    comlex operator +(comlex c1){
        comlex temp;
        temp.real=real+c1.real;
        temp.img=img+c1.real;
        return temp;
    }

     comlex operator -(comlex c1){
        comlex temp;
        temp.real=real-c1.real;
        temp.img=img-c1.real;
        return temp;
    }

    void output(){
        if(img < 0)
            cout<<"\n complex number : "<< real<<img<<"i";
        else
             cout<<"\n complex number : "<< real<<"+"<<img<<"i";

    }

};


int main(){
    comlex c1,c2,result;

    cout<<"\n enter first complex number :";
    c1.input();
    cout<<"\n enter second complex number :";
    c2.input();
    cout<<"\n\n\n\n\n";

    result=c1 + c2;
    result.output();
    cout<<"\n\n\n\n\n";
    result=c1 - c2;
    result.output();

}
