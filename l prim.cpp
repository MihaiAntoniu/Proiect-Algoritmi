// PROPRIETATEA DE NUMAR PRIM
#include <iostream>
long int n, prim, d;

int main()
{
    cin>>n;
    prim=1;
    d=2;
    while (d<=n/2)
    {
        if (n%d==0)
        {
            prim=0;
        }
        d=d+1;
    }

    if (prim==1)
    {
        cout<<"Da";
    }
    else
    {
        cout<<"Nu";
    }
    return 0;
}
