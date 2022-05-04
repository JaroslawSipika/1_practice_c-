#include <iostream>
using namespace std;

int maksimum (int n, int *wtab)
{
    for(int i=0; i<n; i++)
    {
        int a;
        cout << "Podaj wartosc dla elementu tab1[" << i << "]" << endl;
        cin >> a;
        wtab[i] = a;
    }


    cout << "Wartosci tablicy:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }


    int maximum = wtab[0];
    for (int i=1; i<n; i++)
    {
        if (wtab[i] > maximum)
        {
            maximum = wtab[i];
        }
    }

    return maximum;

}

int minimum (int n, int *wtab)
{
    for(int i=0; i<n; i++)
    {
        int a;
        cout << "Podaj wartosc dla elementu tab1[" << i << "]" << endl;
        cin >> a;
        wtab[i] = a;
    }


    cout << "Wartosci tablicy:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }


    int minimum = wtab[0];
    for (int i=1; i<n; i++)
    {
        if (wtab[i] < minimum)
        {
            minimum = wtab[i];
        }
    }

    return minimum;

}

int maksimumindeks (int n, int *wtab)
{
    for(int i=0; i<n; i++)
    {
        int a;
        cout << "Podaj wartosc dla elementu tab1[" << i << "]" << endl;
        cin >> a;
        wtab[i] = a;
    }


    cout << "Wartosci tablicy:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }


    int maximum = 0;
    for (int i=1; i<n; i++)
    {
        if (wtab[i] > wtab[maximum])
        {
            maximum = i;
        }
    }

    return maximum;

}

int minimumindeks (int n, int *wtab)
{
    for(int i=0; i<n; i++)
    {
        int a;
        cout << "Podaj wartosc dla elementu tab1[" << i << "]" << endl;
        cin >> a;
        wtab[i] = a;
    }


    cout << "Wartosci tablicy:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }


    int minimum = 0;
    for (int i=1; i<n; i++)
    {
        if (wtab[i] < wtab[minimum])
        {
            minimum = i;
        }
    }

    return minimum;

}

int main()
{
    int a;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> a;

    cout << "Najwieksza wartosc to: " << maksimum (a, new int[a]) << endl;
    cout << "Najmniejsza wartosc to: " << minimum (a, new int[a]) << endl;
    cout << "Najwieksza wartosc pod indeksem: " << maksimumindeks (a, new int[a]) << endl;
    cout << "Najmniejsza wartosc pod indeksem: " << minimumindeks (a, new int[a]) << endl;
}
