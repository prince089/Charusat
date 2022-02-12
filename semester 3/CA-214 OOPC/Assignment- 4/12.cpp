#include<iostream>
using namespace std;
class laptop{
    int size;
public:
    laptop(int size){
        this->size=size;
    }
    laptop(){};

    int getsize(){
        return size;
    }

    void show(){
        cout<<" \n laptop screen size is : "<<size;
    }


};
class mobile{
    int size;
public:
    mobile(int size){
        this->size=size;
    }

    mobile(){}

    void operator =(laptop lp){
        size = lp.getsize()/4;
    }
    void show(){
        cout<<"\n mobile screen is : "<<size;
    }
};

int main(){
    laptop ll(40);
    mobile m1;
    m1=ll;
    ll.show();
    m1.show();
}
