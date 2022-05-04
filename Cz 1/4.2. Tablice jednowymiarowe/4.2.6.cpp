#include <iostream>
using namespace std;

int funkcja1 (int *wtab1, int *wtab2, int n)
{
    for (int i=0; i<n; i++)
    {
        wtab1[i] = i;
        cout << wtab1[i] << endl;
    }

    for (int i=0; i<n; i++)
    {
        wtab2[i] = wtab1[i];
        cout << wtab2[i] << endl;
    }

}

int funkcja2 (int *wtab1, int *wtab2, int n)
{
    for (int i=0; i<n; i++)
    {
        wtab1[i] = i;
        cout << wtab1[i] << endl;
    }

    int k = n;
    for (int i=0; i<n; i++)
    {
        wtab2[i] = wtab1[k-1];
        cout << wtab2[i] << endl;
        k--;
    }
}


int main()
{
    int a;
    cout << "Podaj rozmiat tablic" << endl;
    cin >> a;

    cout << "Ktore przypisanie 1 czy 2" << endl;
    int b;
    cin >> b;

    switch(b)
    {
        case 1:
        funkcja1 (new int[a], new int[a], a);
        break;

        case 2:
        funkcja2 (new int[a], new int[a], a);
        break;
    }

}
