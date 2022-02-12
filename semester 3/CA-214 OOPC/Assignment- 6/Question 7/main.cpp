#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int dig=0,alpha=0,speChar=0,vow=0,cons=0;
    cout << " " << endl;
    for(int i=1;i<argc;i++)
    {
        if (argv[i]=="A"||argv[i]=="E"||argv[i]=="I"||argv[i]=="O"||argv[i]=="U"||argv[i]=="a"||argv[i]=="e"||argv[i]=="i"||argv[i]=="o"||argv[i]=="u")
        {
            alpha++;
            vow++;
        }
        else if(argv[i]>"A" && argv[i]<"Z"||argv[i]>"a" && argv[i]<"z")
        {
            alpha++;
            cons++;
        }
        else if(argv[i]>"0" && argv[i]<"999")
        {
            dig++;
        }
        else
        {
            speChar++;
        }
    }
    cout<<"\nTotal Alphabets Are: "<<alpha;
    cout<<"\nTotal Vowels Are: "<<vow;
    cout<<"\nTotal Consonants Are: "<<cons;
    cout<<"\nTotal Digits Are: "<<dig;
    cout<<"\nTotal Special Characters Are: "<<speChar;
    return 0;
}
