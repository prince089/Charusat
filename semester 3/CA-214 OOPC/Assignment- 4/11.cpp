#include<iostream>
using namespace std;
class time{
    int hrs,min;
public:
    time(int t){
        hrs=t/60;
        min=t%60;

    }

    void display(){
        cout<<hrs<<": hour's \n";
        cout<<min<<": minets \n";


    }
};

int main(){
    int duration;
    cout<<"\n enter time duration : ";
    cin>>duration;

    time t1=duration;

    t1.display();
}
