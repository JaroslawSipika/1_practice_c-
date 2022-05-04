#include <iostream>
using namespace std;

int funkcja (int tablica[][100], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<100; j++)
        {
            tablica[i][j] = 2;
        }
    }


    int licznik = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<100; j++)
        {
            licznik = licznik + tablica[i][j];
        }
    }

return licznik;


}


int main()
{
    int a = 5;
    int tablica [a][100] = {};

    cout << funkcja (tablica, a) << endl;

}
