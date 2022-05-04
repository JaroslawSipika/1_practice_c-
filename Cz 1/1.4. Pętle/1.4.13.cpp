#include <iostream>
using namespace std;

int main()
{
    int n;
    int silnia = 1;
    int suma = 1;
    int k;

    cout << "Podaj liczbe n" << endl;
    cin >> n;


    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            silnia=silnia*j;
            k = silnia;
        }
    silnia = 1;
    suma=suma+k;

    }

    cout << "Wynik sumy: " << suma << endl;
}
