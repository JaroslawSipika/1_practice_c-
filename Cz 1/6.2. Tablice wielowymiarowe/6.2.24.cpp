#include <iostream>
using namespace std;

int funkcja (int **tablica, int n, int m)
{
    int k = 1;
    for (int i=0; i<n; i++)
    {
        tablica[i] = new int [m];
        for (int j=0; j<m; j++)
        {
            tablica[i][j] = k;
            k++;
            cout << tablica[i][j] << " ";
        }
    cout << "" << endl;
    }

    int j=0;
    for (int i=0; i<n; i++)
    {
        int pojemnik = tablica[i][j+2];
        tablica[i][j+2] = tablica[i][j+1];
        tablica[i][j+1] = tablica[i][j];
        tablica[i][j] = pojemnik;
    }



    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << tablica[i][j] << " ";
        }
    cout << "" << endl;

    }


}



int main()
{
    int a, b;
    cin >> a;
    cin >> b;


    funkcja (new int*[a], a, b);




}

