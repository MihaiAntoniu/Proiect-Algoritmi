//B10 --> Ba

#include <iostream>

using namespace std;

int b10, bq=0, r, q;
//q apartine [2, 9]
long p=1;
int main()
{
    cout<<"NR B10=";
    cin>>b10;
    cout<<"Baza in care se schimba: ";
    cin>>q;
    while(b10)
    {
        r=b10&q;
        b10=b10/q;
        bq=bq+r*p;
        p=p*10;
    }
    cout<<"NR in baza "<<q<<" este : "<<bq<<endl;
    return 0;
}
