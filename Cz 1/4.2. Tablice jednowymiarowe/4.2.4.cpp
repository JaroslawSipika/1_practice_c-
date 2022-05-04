#include <iostream>
#include <math.h>
using namespace std;

double funkcja (int n, unsigned int *wtab)
{
    unsigned int iloczyn = 1;

    for (int i=0; i<n; i++)
    {
        unsigned int k;
        cout << "Podaj wartosc dla elementow tablicy" << endl;
        cin >> k;
        wtab[i] = k;
        iloczyn = iloczyn * wtab[i];
    }

double ilo = iloczyn;
double prw = n;
double d = pow(iloczyn, 1/prw);
cout << d << endl;
return d;

}




int main()
{
    int a;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> a;

    cout << funkcja (a, new unsigned int[a]) << endl;

}
