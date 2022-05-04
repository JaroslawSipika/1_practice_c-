#include <iostream>
using namespace std;

int funkcja(int n, int *wtab1, int *wtab2, int *wtab3)
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
        cout << "Podaj wartosc dla elementu tab3[" << i << "]" << endl;
        cin >> a;
        wtab3[i] = a;

    }


    for (int i=0; i<n; i++)
    {
        if (wtab3[i] >= wtab1[i] && wtab3[i] >= wtab2[i])
        {
            if (wtab2[i]<=wtab1[i])
            {
                int k = wtab3[i];
                wtab3[i] = wtab2[i];
                wtab2[i] = wtab1[i];
                wtab1[i] = k;
            }
            else
            {
                int k = wtab1[i];
                wtab1[i] = wtab3[i];
                wtab3[i] = k;
            }
        }

        else if (wtab2[i] >= wtab1[i] && wtab2[i] >= wtab3[i])
        {
            if (wtab3[i]>=wtab1[i])
            {
                int k = wtab3[i];
                wtab3[i] = wtab1[i];
                wtab1[i] = wtab2[i];
                wtab2[i] = k;
            }
            else
            {
                int k = wtab1[i];
                wtab1[i] = wtab2[i];
                wtab2[i] = k;
            }
        }

        else if (wtab1[i] >= wtab2[i] && wtab1[i] >= wtab3[i])
        {
            if (wtab2[i]<=wtab3[i])
            {
                int k = wtab3[i];
                wtab3[i] = wtab2[i];
                wtab2[i] = k;

            }
        }
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

    cout << "Wartosci tablicy3:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab3[i] << endl;
    }

}


int main()
{
    int a;

    cout << "Podaj liczbe elementow tablicy" << endl;
    cin >> a;

    funkcja(a, new int[a], new int[a], new int [a]);

}

