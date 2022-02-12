#include<iostream>
using namespace std;
void institute(string collage="CMPICA",string uni="CHARUSAT");

int main(){

    string uni,collage;

    cout<<"\n enter your institute name";
    cin>>(collage);

    cout<<"\n enter your university name";
    cin>>(uni);

    institute(collage,uni);



    return 0;
}

void institute(string collage,string uni){

    cout<<"\n  your institute name is "<<collage;
    cout<<"\n  your university  name is "<<uni;

}
