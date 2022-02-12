#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int n;
    int odd,even;
    for (int i=1;i<argc;i++)
    {
        n=stoi(argv[i]);
        if (n%2==1)
        {
            cout<<"\nNumber is Odd.";
            odd++;
        }
        else
        {
            cout<<"\nNumber is Even.";
            even++;
        }
    }
    cout<<"\nTotal Odd Numbers Are: "<<odd;
    cout<<"\nTotal Even Numbers Are: "<<even;
    return 0;
}
