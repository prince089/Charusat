#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int n;
    for (int i=1;i<argc;i++)
    {
        n=stoi(argv[i]);
        if (n%2==1)
            cout<<"\nNumber is Odd.";
        else
            cout<<"\nNumber is Even.";
    }
    return 0;
}
