#include <iostream>
using namespace std;

int funkcja (int tablica[][100], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<100; j++)
        {
            tablica[i][j]=0;
        }
    }

cout << tablica[5][0] << endl;
}


int main()
{
    int a = 6;
    int tablica [a][100];

    funkcja(tablica, a);



}
