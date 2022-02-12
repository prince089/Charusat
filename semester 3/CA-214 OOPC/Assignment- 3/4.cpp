#include<iostream>
using namespace std;

class student{
private:
    int id,semester;
    string name,program;
public:
    student(int i,string n,int s,string p){
    id=i;
    name=n;
    semester=s;
    program=p;

    }
    void display();


};

void student :: display(){
    cout<<"id : "<<id;
    cout<<"name : "<<name;
    cout<<"semseter : "<<semester;
    cout<<"program : "<<program;

}

int main(){

    student s1(89,"prince",4,"bca");

    s1.display();
}
