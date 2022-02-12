#include <iostream>

using namespace std;

int main(int argv,char *argc[])
{
    cout << "Hello world!" << endl;
    for (int i=1;i<argv;i++)
    {
        cout<<"\n"<<argc[i];
    }
    return 0;
}
