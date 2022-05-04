#include <iostream>
using namespace std;


int *funkcja (int n, int *tab1)
{
    cout << "Uzupelnij tablice 1" << endl;
    for (int i=0; i<n; i++)
    {
        cout << "Podaj wartosc elementu" << "[" <<i<< "]" << endl;
        int c;
        cin >> c;
        tab1[i] = c;
    }

    cout << "Wartosci tabicy 1" << endl;
    for (int i=0; i<n; i++)
    {
        cout << tab1[i] << endl;
    }

    int lElRozodZera = 0;
    for (int i=0; i<n; i++)
    {
        if(tab1[i]!=0)
        {
            lElRozodZera++;
        }
    }
    cout << "Liczba elementow roznych od zera:" << lElRozodZera << endl;

    int *wsk2 = new int[lElRozodZera];

    int j = 0;
    for (int i=0; i<n; i++)
    {
        if(tab1[i]!=0)
        {
            wsk2[j] = tab1[i];
            j++;
        }
    }

return wsk2;
}

int main()
{
    cout << "Podaj rozmiar tablicy" << endl;
    int a;
    cin >> a;

    int *x = funkcja (a, new int[a]);

    cout << x << endl;
}
