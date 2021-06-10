#include <iostream>

using namespace std;

unsigned long long a, b, c;
unsigned int n;

int main()
{

    cout << "n=";
    cin>>n;
    if(n==1)
    {
        cout<<"0";
    }
    else
    {
        if (n==2)
        {
            cout<<" 0 1";
        }
        else
        {
            a=0;
            b=1;
            cout<<a<<" "<<b<<" ";
            for(int i=3; i<=n; i++)
            {
                c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
            }
        }
        return 0;
    }
}
