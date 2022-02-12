#include<iostream>
using namespace std;

class employ{
public:
    int id,basicsalary,ta=500,ppf=400,ns,gs;
    string name,designation;
    float hra,pt;

    employ(int i,string n,string d,int b){
        id=i;
        name=n;
        designation=d;
        basicsalary=b;



    }

    void calculatsalary(){



            if (designation=="manager") {
                if (basicsalary >=100000 && basicsalary <= 500000){
                    gs=basicsalary+(0.9*basicsalary)+ta;
                    ns=gs-ppf-(0.5*basicsalary);

                }
                else{
                    cout<<"\n you enter wrong salary for manager";
                }
            }


                if"assistant manager" :
                if (basicsalary >=50000 && basicsalary <= 99999){
                    gs=basicsalary+(0.9*basicsalary)+ta;
                    ns=gs-ppf-(0.5*basicsalary);

                }
                else{
                    cout<<"\n you enter wrong salary for assistant manager";
                }
                break;

                case "clerk" :
                if (basicsalary >=100000 && basicsalary <= 500000){
                    gs=basicsalary+(0.9*basicsalary)+ta;
                    ns=gs-ppf-(0.5*basicsalary);

                }
                else{
                    cout<<"\n you enter wrong salary for clerk";
                }
                break;


        }



    /*gs=basicsalary+(0.9*basicsalary)+ta;
    ns=gs-ppf-(0.5*basicsalary);*/

    }

    void display(){

        cout<<"\n id :"<<id;
        cout<<"\n name :"<<name;
        cout<<"\n designation :"<<designation;
        cout<<"\n basic salary :"<<basicsalary;
        cout<<"\n netsalary :"<<ns;
    }


};

int main(){


    employ e1(001,"prince","manager",100000),e2(002,"kizi","assistant manager",80000),e3(003,"basu","clerk",60000);
    e1.calculatsalary();
    e1.display();
    e2.calculatsalary();
    e2.display();
    e3.calculatsalary();
    e3.display();
}
