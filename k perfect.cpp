// PROPRIETATEA DE NUMAR PERFECT
#include <iostream>
using namespace std;

int x, s=0;

int main()
{
    cout<<"x=";
    cin>>x;
    for (int i=1; i<=x/2; i++)
    {
        if(x%i==0) s+=i;
    }
    if(x==s)
    {
        cout<<"Da, este nr perfect";
    }
    else
    {
        cout<<"Nu, nu este nr perfect";
    }
    return 0;
}
