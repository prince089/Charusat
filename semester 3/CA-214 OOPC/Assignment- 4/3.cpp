#include<iostream>
using namespace std;

class opretion{

    int itemp,len;
    string stemp;

public:
    void palidrome(int main){
        int i,s=0,r,itemp=main;
        while(main>0){


            r=main%10;
            s=s*10+r;
            main=main/10;
        }
        if(itemp == s){
            cout<<itemp<<" is palindrome number \n";
        }
        else
             cout<<itemp<<" is not palindrome number \n";



    }

     void palidrome(string main){

         stemp = main;
         len = main.size();
         int j=0;

         for(int i=len-1;i>=0;i--){

         main[i]=stemp[j];
         j++;
          }

         if(main == stemp){
        cout<<"\n your string is palidrome";
         }

    else{
        cout<<"\n your string is not palidrone";
        }



    }


     void reaverse(int main){
         int i,s=0,r,itemp=main;
        while(main>0){


            r=main%10;
            s=s*10+r;
            main=main/10;
        }

             cout<<"\n"<<s<<" is  your reverse  number \n";


    }


     void reaverse(string main){


         stemp = main;
         len = main.size();
         int j=0;

         for(int i=len-1;i>=0;i--){

        main[i]=stemp[j];
        j++;
        }


        cout<<"\n your reverse string is :"<<main;




    }



};


int main(){

    opretion n1,n2,n3,n4;
    n1.palidrome(121);
    n2.palidrome("abc");
    n3.reaverse(123);
    n4.reaverse("abc");

}
