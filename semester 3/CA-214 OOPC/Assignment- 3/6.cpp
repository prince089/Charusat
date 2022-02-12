#include<iostream>
using namespace std;

class student{
private:
    int id,semester,m1,m2,m3,m4,m5;
    string name,program;
public:
    student(int i,string n,int s,string p,int m1,int m2,int m3,int m4,int m5){
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

    void grade(){
        int sum=0;
        sum=m1+m2+m3+m4+m5;


        if(sum >= 80 ){
            cout<<"\n A grade ";
        }
        else if(sum >= 70 ){
            cout<<"\n A grade ";
        }
        else if(sum >= 60 ){
            cout<<"\n A grade ";
        }
        else if(sum >= 40 ){
            cout<<"\n A grade ";
        }
         else{
            cout<<"\n A grade ";
        }

    }


};

void student :: display(){
    cout<<"\nid : "<<id;
    cout<<"\nname : "<<name;
    cout<<"\nsemseter : "<<semester;
    cout<<"\nprogram : "<<program;

}

int main(){

    student s1(89,"prince",4,"bca",90,90,90,90,90);
    student s2=s1;

    s1.display();
    s1.grade();
    s2.display();
}
