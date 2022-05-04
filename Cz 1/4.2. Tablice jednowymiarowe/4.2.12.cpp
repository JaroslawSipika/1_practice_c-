#include <iostream>
using namespace std;

funkcja1 (int n, int *wtab)
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

    int j=n-1;
    for (int i=0; i<n/2; i++)
    {
        int pom = wtab[i];
        wtab[i] = wtab[j];
        wtab[j] = pom;
        j--;
    }

    cout << "Wartosci tablicy po odwroceniu kolejnosci:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }
delete [] wtab;
}

funkcja2 (int n, int *wtab)
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


    int j=n-1;
    for (int i=n-2; i>=0; i--)
    {
        int pom = wtab[i];
        wtab[i] = wtab[j];
        wtab[j] = pom;
    }

    cout << "Wartosci tablicy po zmianie:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }
delete [] wtab;
}

funkcja3 (int n, int *wtab)
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

    int pom = wtab[n-1];
    int j = n-2;
    for (int i=n-1; i>0; i--)
    {
        wtab[i]=wtab[j];
        j--;
    }
    wtab[0] = pom;

    cout << "Wartosci tablicy po zmianie:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }
delete [] wtab;
}

funkcja4 (int n, int *wtab)
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

        for (int j=0; j<n-1 ;j++)
        {
            for(int i=0; i<n-1; i++)
            {
                if (wtab[i]>wtab[i+1])
                {
                    int pom = wtab[i+1];
                    wtab[i+1]=wtab[i];
                    wtab[i]=pom;
                }
            }
        }

    cout << "Wartosci tablicy po zmianie:" << endl;

    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }
delete [] wtab;
}

funkcja5 (int n, int *wtab)
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

        for (int j=0; j<n-1 ;j++)
        {
            for(int i=0; i<n-1; i++)
            {
                if (wtab[i]<wtab[i+1])
                {
                    int pom = wtab[i+1];
                    wtab[i+1]=wtab[i];
                    wtab[i]=pom;
                }
            }
        }

    cout << "Wartosci tablicy po zmianie:" << endl;

    for(int i=0; i<n; i++)
    {
        cout << wtab[i] << endl;
    }
delete [] wtab;
}

int main()
{
    int a;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> a;

    int b;
    cout << "Ktore dzialanie? 1,2,3,4,5" << endl;
    cin >> b;

    switch(b)
    {
        case(1):
            funkcja1 (a, new int[a]);
            break;
        case(2):
            funkcja2 (a, new int[a]);
            break;
        case(3):
            funkcja3 (a, new int[a]);
            break;
        case(4):
            funkcja4 (a, new int[a]);
            break;
        case(5):
            funkcja5 (a, new int[a]);
            break;
    }
}

