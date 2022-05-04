#include <iostream>
using namespace std;

int funkcja1 (int n, int *wtab1, int *wtab2, int *wtab3)
{
    for (int i=0; i<n; i++)
    {
        wtab1[i] = i;
        wtab2[i] = i;
        wtab3[i] = wtab1[i]+ wtab2[i];
        cout << wtab3[i] << endl;
    }
}

int funkcja2 (int n, int *wtab1, int *wtab2, int *wtab3)
{
    for (int i=0; i<n; i++)
    {
        int c;
        int d;
        cout << "Podaj element tablicy 1" << endl;
        cin >> c;
        wtab1[i] = c;
        cout << "Podaj element tablicy 2" << endl;
        cin >> d;
        wtab2[i] = d;

        if (wtab1[i] > wtab2[i])
        {
            wtab3[i] = wtab1[i];
        }
        else
        {
            wtab3[i] = wtab2[i];
        }
    }

    for (int i=0; i<n; i++)
    {
        cout << wtab3[i] << endl;
    }

}
int funkcja3 (int n, int *wtab1, int *wtab2, int *wtab3)
{
    for (int i=0; i<n; i++)
    {
        int c;
        cout << "Podaj element tablicy 1" << endl;
        cin >> c;
        wtab1[i] = c;

        int d;
        cout << "Podaj element tablicy 2" << endl;
        cin >> d;
        wtab2[i] = d;

        int e;
        cout << "Podaj element tablicy 3" << endl;
        cin >> e;
        wtab3[i] = e;


        int f = wtab3[i];
        wtab3[i] = wtab2[i];
        wtab2[i] = wtab1[i];
        wtab1[i] = f;




    }

    for (int i=0; i<n; i++)
    {
        cout << wtab1[i] << endl;
        cout << wtab2[i] << endl;
        cout << wtab3[i] << endl;
    }

}


int main()
{
    int a;
    cout << "Podaj rozmiat tablic" << endl;
    cin >> a;

    cout << "Ktore przypisanie 1, 2 czy 3" << endl;
    int b;
    cin >> b;

    switch(b)
    {
        case 1:
        funkcja1 (a, new int[a], new int[a], new int[a]);
        break;

        case 2:
        funkcja2 (a, new int[a], new int[a], new int[a]);
        break;

        case 3:
        funkcja3 (a, new int[a], new int[a], new int[a]);
        break;
    }

}
