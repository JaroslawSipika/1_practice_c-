#include <iostream>
using namespace std;

double funkcja_a (int n, int *tab)
{
    double suma=0;
    for(int i=0; i<n; i++)
    {
        int k;
        cout << "Podaj wartosci elementow tablicy" << endl;
        cin >> k;
        tab[i] = k;
        suma = suma + tab[i];
    }
    cout << suma << endl;
    double c = suma/n;
    cout << c << endl;
}

int funkcja_b (int n, int *tab)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        int k;
        cout << "Podaj wartosci elementow tablicy" << endl;
        cin >> k;
        tab[i] = k;
        suma = suma + tab[i];
    }
    cout << suma << endl;
}

int funkcja_c (int n, int *tab)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        int k;
        cout << "Podaj wartosci elementow tablicy" << endl;
        cin >> k;
        tab[i] = k*k;

        suma = suma + tab[i];
    }
    cout << suma << endl;
}


int main()
{
    int a;
    cout << "Podaj liczbe elementow tablicy" << endl;
    cin >> a;

    new int [a];


    int k;
    cout << "Wybierz funkcja od 1-3" << endl;
    cin >> k;

    switch(k)
    {
        case 1:
        funkcja_a (a, new int[a]);
        break;

        case 2:
        funkcja_b (a, new int[a]);
        break;

        case 3:
        funkcja_c (a, new int[a]);
    }
}
