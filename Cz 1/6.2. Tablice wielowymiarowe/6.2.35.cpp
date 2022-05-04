#include <iostream>
using namespace std;

void **funkcja (int **tablica1, int **tablica2, int n, int m, int k)
{
    int **tablica3 = new int *[n];
    int s = 1;
    for (int i=0; i<n; i++)
    {
        tablica1[i] = new int [m];
        tablica3[i] = new int [k];
        for (int j=0; j<m; j++)
        {
            tablica1[i][j] = s;
            s++;
        }
    }

    int z = 2;
    for (int i=0; i<m; i++)
    {
        tablica2[i] = new int [k];

        for (int j=0; j<n; j++)
        {
            tablica2[i][j] = z;
            z++;
        }
    }


    for (int i=0; i<n; i++)
    {
        for (int k=0; k<n; k++)
        {
            int suma = 0;
            for (int j=0; j<m; j++)
            {
                suma = suma + (tablica1[i][j] * tablica2[j][k]);
            }
            tablica3[i][k] = suma;
        }
    }

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
            cout << tablica1[i][j] << " ";
            }
        cout << "" << endl;
        }

        for (int i=0; i<m; i++)
        {
            for (int j=0; j<k; j++)
            {
            cout << tablica2[i][j] << " ";
            }
        cout << "" << endl;
        }


        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
            cout << tablica3[i][j] << " ";
            }
        cout << "" << endl;
        }

}



int main()
{
    cout << "Liczba kolumn pierwszej tablicy ma sie rownac liczbie wierszy drugiej tablicy" << endl;
    int a;
    int b;
    int c;
    cout << "Podaj wymiar n tablicy n x m" << endl;
    cin >> a;
    cout << "Podaj wymiar m tablicy n x m oraz m x k" << endl;
    cin >> b;
    cout << "Podaj wymiar k tablicy m x k" << endl;
    cin >> c;


    funkcja (new int *[a], new int*[b], a, b, c);





}


