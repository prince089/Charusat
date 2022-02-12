#include<iostream>
using namespace std;

class course;
class student{

private:
    int id;
    string name;

public:
    student(int i,string n){

        id=i;
        name=n;


    }
    friend void sem_details(student,course);


};

class course{
private:
    string sub;
public:
    course(string s){

        sub=s;
    }

    friend void sem_details(student,course);



};

void sem_details(student s,course c){

    cout<<"id : "<<s.id;
    cout<<"\nname :"<<s.name;
    cout<<"\ncorse :"<<c.sub;
}


int main(){

    student s1(89,"prince");
    course c1(" pi 2\n oopc \nsad \n python \n ");

    sem_details(s1,c1);

    //return 0;


}
