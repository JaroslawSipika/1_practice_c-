#include <iostream>
using namespace std;

double funkcja (int n, const int *tab)
{
    double suma=0;
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << endl;
        suma = suma + tab[i];
    }
    double k = suma/n;
    return k;
}



int main()
{
    int a = 5;
    int tab[a];

    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;

    cout << funkcja (a, tab) << endl;
}
