#include <iostream>
using namespace std;

int funkcja1(int n, int *wtab1, int *wtab2, double *wtab3)
{
    for(int i=0; i<n; i++)
    {
        int a;
        cout << "Podaj wartosc dla elementu tab1[" << i << "]" << endl;
        cin >> a;
        wtab1[i] = a;
        cout << "Podaj wartosc dla elementu tab2[" << i << "]" << endl;
        cin >> a;
        wtab2[i] = a;
    }

    cout << "Wartosci tablicy1:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab1[i] << endl;
    }

    cout << "Wartosci tablicy2:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab2[i] << endl;
    }

    for (int i=0; i<n; i++)
    {
        wtab3[i] = wtab1[i];
    }

    int k=0;
    for (int i=n; i<2*n; i++)
    {
        wtab3[i] = wtab2[k];
        k++;
    }
    cout << "Wartosci tablicy3:" << endl;
    for(int i=0; i<2*n; i++)
    {
        cout << wtab3[i] << endl;
    }




}

int funkcja2(int n, int *wtab1, int *wtab2, double *wtab3)
{
    for(int i=0; i<n; i++)
    {
        int a;
        cout << "Podaj wartosc dla elementu tab1[" << i << "]" << endl;
        cin >> a;
        wtab1[i] = a;
        cout << "Podaj wartosc dla elementu tab2[" << i << "]" << endl;
        cin >> a;
        wtab2[i] = a;
    }

    cout << "Wartosci tablicy1:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab1[i] << endl;
    }

    cout << "Wartosci tablicy2:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab2[i] << endl;
    }

    int p=0;
    int o=0;
    for (int i=0; i<2*n; i++)
    {
        if (i%2==0)
        {
        wtab3[i] = wtab2[p];
        p++;
        }
        else
        {
        wtab3[i] = wtab1[o];
        o++;
        }
    }

    cout << "Wartosci tablicy3:" << endl;
    for(int i=0; i<2*n; i++)
    {
        cout << wtab3[i] << endl;
    }

}





int main()
{
    int a;
    int wybor;

    cout << "Podaj liczbe elementow tablicy" << endl;
    cin >> a;

    cout << "Wybierz dzialanie 1 czy 2" << endl;
    cin >> wybor;

    switch(wybor)
    {
        case 1:
        funkcja1(a, new int[a], new int[a], new double [2*a]);
        break;

        case 2:
        funkcja2(a, new int[a], new int[a], new double [2*a]);
        break;
    }




}
