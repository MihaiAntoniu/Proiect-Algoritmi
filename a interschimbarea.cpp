// INTERSCHIMBAREA A DOUA VARIABILE
#include <iostream>
using namespace std;

int main()
{
    int aux, a, b;
    cin >> a >> b;
    aux = a;
    a = b;
    b = aux;
    cout<<a<<" "<<b;
    return 0;
}
