#include<iostream>
using namespace std;

class distance{
    int feet,inch;
public:
    distance(int feet,int inch){
        this->feet=feet;
        this->inch=inch;
    }
    distance(){}
    operator int(){
        return feet*12+inch;
    }

    void display(){
        cout<<"\n feet = "<<feet;
        cout<<"\n inch = "<<inch;
    }
};

int main(){
    distance d(6,4);
    int inches = d;

    cout<<"\n inches ="<<d;
    return 0;
}
