#include <iostream>
using namespace std;

int main()
{
    int a, b, aux1, aux2;
    cin>>a>>b;
    aux1=a;
    aux2=b;
    while (a!=b)
    {
        if (a>b)
        {
            a-=b;

        }

        else
        {
            b-=a;
        }

    }
    cout<<"rezultat: "<<(float) (aux1*aux2)/a;
    return 0;
}
