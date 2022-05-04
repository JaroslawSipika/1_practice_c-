#include <iostream>
using namespace std;

int main()
{
    cout << "Podaj nieujemna liczbe calkowita" << endl;
    int n;
    int suma = 0;
    cin >> n;

    cout << "Suma kwadratow to:" << endl;

    for (int i=0; i<=n; i++)
    {
        suma=suma+(i*i);
    }
    cout << suma << endl;

}

