#include<iostream>
using namespace std;

int main(){

    int pin,mypin=989864,amt,balance=10000,no;

    cout<<"welcome to our bank \n********************************\n";
    into:
    cout<<"enter your pin : ";
    cin>>pin;
    if(pin == mypin){
            do{
            cout<<"\n1. account info\n2. withdraw\n3. exit\n";
            cout<<"\n ente your choise ";
            cin>>no;
                    switch(no){

                        case 1: cout<<"\n your currant balance is "<<balance;
                                break;


                        case 2: if(balance == 1000 ){
                                    cout<<"\n i m sorry you rich your low line of blance ): \n you cant with draw amount youa have to first add amount";
                                }
                                else{

                                    cout<<"\nenter how much you want to withdraw ";
                                    cin>>amt;
                                        if(balance-amt < 1000 ){

                                            cout<<"\n i m sorry you rich your low line of blance ): \n you cant with draw amount youa have to first add amount";
                                        }
                                        else{
                                            balance=balance-amt;
                                            cout<<"\n you withdraw "<<amt<<" an now your blance is "<<balance;
                                        }
                                }
                                break;

                        case 3: return 0;


                    }

            }while(no != 3);


    }
    else{
        cout<<"\n i  sorry your pin is wrong !!!!!! try agin";
        goto into;
    }



}
