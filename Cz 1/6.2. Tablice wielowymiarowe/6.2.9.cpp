#include <iostream>
using namespace std;

int funkcja (int **tablica, int n, int m)
{

    int i;
    int j;
    for (i=0; i<n; i++)
    {
        tablica [i] = new int [m];
        for (j=0; j<m; j++)
        {
            tablica[i][j] = 0;
            cout << tablica [i][j] << endl;

        }
    }



}


int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    funkcja (new int *[a], a, b);





}
