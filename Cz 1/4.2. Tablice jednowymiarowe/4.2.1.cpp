#include <iostream>
using namespace std;

void funkcja_b (int n, int *wtab)
{
    int i;
    for (i=0; i<n; i++)
        {
            wtab[i] = i;
            cout << wtab[i] << endl;
        }
}

void funkcja_a (int n, int *wtab)
{
    int i;
    for (i=0; i<n; i++)
        {
            wtab[i] = 0;
            cout << wtab[i] << endl;
        }
}

void funkcja_c (int n, int *wtab)
{
    int i;
    for (i=0; i<n; i++)
        {
            wtab[i] = i;
            wtab[i] = wtab[i]*2;
            cout << wtab[i] << endl;
        }
}

void funkcja_d (int n, int *wtab)
{
    for(int i=0; i<n; i++)
    {
        int k;
        cout << "Podaj wartosci elementow tablicy" << endl;
        cin >> k;
        if (k<0) wtab[i] = -k;
        else wtab[i] = k;

        cout << wtab[i] << endl;
    }
}



int main()
{
    int a;

    cout << "Podaj ilosc elementow tablicy" << endl;
    cin >> a;

    new int[a];

    funkcja_a (a, new int[a]);
    funkcja_b (a, new int[a]);
    funkcja_c (a, new int[a]);
    funkcja_d (a, new int[a]);

}
