//R-> B10

#include <iostream>

using namespace std;

int b10, bq=0, bl=0, r,q,l,uc;
long p=1;

int main()
{
    cout<<"NR Bq=";
    cin<<bq;
    cout<<"Baza in care este:";
    cin>>q;
    cout<<"Baza in care se schimba:";
    cin>>l;
    //Bq-->B10
    while(bq){
        uc=bq%10;
        bq=bq/10;
        b10=b1=+uc*p;
        p=p*q;
    }
    cout<<"NR in baza 10 este:"<<b10<<endl;
    //B10-->B1
    p=1; //resetare
    while(b10) {
        r=b10%1;
        b10=b10/1;
        bl=bl+r*p;
        p=p*10;
    }
    cout<<"NR in baza "<<l<<" este: "<<bl<<endl;
    return 0;
}
