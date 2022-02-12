#include<iostream>
using namespace std;

class student{
public:
    int id,semester;
    string name,program;
    void display(){
    cout<<"id : "<<id;
    cout<<"name : "<<name;
    cout<<"semseter : "<<semester;
    cout<<"program : "<<program;

    }


};

int main(){

    student s1;
    s1.id=007;
    s1.name="kizi";
    s1.semester=3;
    s1.program="bca";
    s1.display();
}
