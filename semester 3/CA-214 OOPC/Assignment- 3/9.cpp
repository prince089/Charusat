#include<iostream>
using namespace std;

class car{
private:
    string brand, model,type,fule,color;
    double price;

public:
    car(string b,string m,string t,string f,string c,double p){

        brand=b;
        model=m;
        type=t;
        fule=f;
        color=c;
        price=p;


    }
    void display();
};

void car :: display(){

    cout<<"\n barnd :"<<brand;
    cout<<"\n model :"<<model;
    cout<<"\n type :"<<type;
    cout<<"\n fule :"<<fule;
    cout<<"\n color :"<<color;
    cout<<"\n price :"<<price<<"\n\n\n";
}

int main(){

    car c1("honda","city","suv","diesel","black",100000),c2("mg","hactor","sedan","petrol","white",203000),c3("maruti","swift","suv","diesel","red",800000);

    c1.display();
    c2.display();
    c3.display();
}
