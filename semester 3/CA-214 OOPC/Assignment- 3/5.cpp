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

    student(student&obj){

    id=obj.id;
    name=obj.name;
    semester=obj.semester;
    program=obj.program;
    }


};

void student :: display(){
    cout<<"\nid : "<<id;
    cout<<"\nname : "<<name;
    cout<<"\nsemseter : "<<semester;
    cout<<"\nprogram : "<<program;

}

int main(){

    student s1(89,"prince",4,"bca");
    student s2=s1;

    s1.display();
    s2.display();
}
