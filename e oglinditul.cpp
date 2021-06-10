// OGLINDITUL UNUI NUMAR
#include <iostream>
using namespace std;

int x, ogl;

int main()
{
    cin>>x;
    ogl=0;
    while (x)
    {
        ogl=ogl*10+x%10;
        x/=10;
    }
    cout<<ogl;
    return 0;
}
