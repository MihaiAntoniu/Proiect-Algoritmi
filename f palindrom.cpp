// PROPRIETATEA DE NUMAR PALINDROM
#include <iostream>
using namespace std;

int main()
{
    int a, a1, ogl=0,c;
    cin>>a;
    a1=a;
    while(a!=0)
    {
        c=a%10;
        ogl=ogl*10+c;
        a=a/10;
        if (a1==ogl)cout<<"Numarul este palindrom";
        else cout<<"Numarul nu este palindrom";
    }
    return 0;
}
