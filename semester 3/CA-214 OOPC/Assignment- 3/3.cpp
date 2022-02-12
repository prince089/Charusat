#include<iostream>
using namespace std;

class student{
private:
    int id,semester;
    string name,program;
public:
    student(){
    id=19;
    name="prince";
    semester=3;
    program="bca";

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

    student s1;

    s1.display();
}
