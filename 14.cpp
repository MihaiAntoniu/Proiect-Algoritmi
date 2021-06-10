//R-> B10

#include <iostream>

using namespace std;

int b10=0, bq, uc, q;

long p=1;

int main()
{

    cout<<"NR Bq=";
    cin>>bq;
    cout<<"Baza in care este:";
    cin>>q;
    while(bq)
    {
        uc=bq%10;
        bq=bq/10;
        b10=b10+uc*p;
        p=p*q;
    }
    cout<<"NR in baza 10 este: "<<b10<<endl;
    return 0;
}
