#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Podaj dwie liczby calkowite: " << endl;
    cin >> a;
    cin >> b;

    if (a<0) a=-1*a;
    if (b<0) b=-1*b;

    cout << "wartosc bezwzgledna a: " << a << endl;
    cout << "wartosc bezwzgledna b: " << b << endl;

    if (a>b) cout << "wieksza wartosc bezwgledna: " << a << endl;
    else cout << "wieksza wartosc bezwgledna: " << b << endl;



}
