#include <iostream>
using namespace std;

double funkcja (int **tabliczka, int n, int m)
{

    int i;
    int k = 1;
    double indeks = 0;
    double srednia;
    double maks = 0;
    for (i=0; i<n; i++)
    {
        int licznik = 0;
        tabliczka[i] = new int [m];
        for (int j=0; j<m; j++)
        {
            tabliczka[i][j] = k;
            k++;
            cout << tabliczka [i][j] << endl;
            licznik = licznik + tabliczka[i][j];
        }
        srednia = (double)licznik/m;
        cout << srednia << endl;
        if (srednia > maks)
        {
            maks = srednia;
            indeks = i;
        }
    }

return i;

}




int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;


    cout << funkcja (new int *[a], a, b) << endl;



}
