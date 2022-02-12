#include <iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
    int n;
    fstream fout;
    fout.open("even.dat",ios::out|ios::in);
    fstream fout2;
    fout2.open("odd.dat",ios::out|ios::in);
    for (int i=1;i<argc;i++)
    {
        n=stoi(argv[i]);
        if (n%2==1)
        {
            fout<<n<<endl;
        }
        else
        {
            fout2<<n<<endl;
        }
    }
    fout.close();
    fout2.close();
    return 0;
}
