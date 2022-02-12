#include<iostream>
using namespace std;

class car{
private:
    string brand, model,type,fule,color;
    double price;

public:
    car(string b,string m,string t,string f,string c,double p){

        brand=b;
        model=m;
        type=t;
        fule=f;
        color=c;
        price=p;


    }
    void display();
    void add_feature(){
        int n;
        char c;
        do{
            cout<<"add your feature for your car \n";
            cout<<"1. rear camra - 2000 INR\n";
            cout<<"2. ABS break - 5000 INR\n";
            cout<<"3. music system - 8000 INR\n";
            cout<<"4. power window - 4000 INR\n";
            cout<<"5. seat cover - 1000 INR\n";
            cout<<"6. extra airbags - per airbag 500 INR\n";
            cout<<"7. car insurance - 50000 INR (1 year)\n";

            cout<<"\n enter your choice in number ";
            cin>>n;

                switch(n){
                    case 1:price=price+2000;
                            break;

                    case 2:price=price+5000;
                            break;

                    case 3:price=price+8000;
                            break;

                    case 4:price=price+4000;
                            break;

                    case 5:price=price+1000;
                            break;

                    case 6:price=price+500;
                            break;

                    case 7:price=price+50000;
                            break;

                    default: cout<<"\n invalid choice";

                }

                cout<<"\n you want to continue (press y for continue and press n for cancel)\n";
                cin>>c;

        }while(c != 'n');


    }
};

void car :: display(){

    cout<<"\n barnd :"<<brand;
    cout<<"\n model :"<<model;
    cout<<"\n type :"<<type;
    cout<<"\n fule :"<<fule;
    cout<<"\n color :"<<color;
    cout<<"\n price :"<<price<<"\n\n\n";
}

int main(){

    car c1("honda","city","suv","diesel","black",100000),c2("mg","hactor","sedan","petrol","white",203000),c3("maruti","swift","suv","diesel","red",800000);

    c1.display();
    c1.add_feature();
    c1.display();
    /*c2.display();
    c3.display();*/
}
