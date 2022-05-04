#include <iostream>
using namespace std;

int funkcja (int ***tablica, int n)
{

    int ***tablica2 = new int**[n];

    int s = 0;
    for (int i=0; i<n; i++)
    {
        tablica[i] = new int *[n];
        tablica2[i] = new int *[n];
        for (int j=0; j<n; j++)
        {
            tablica[i][j] = new int [n];
            tablica2[i][j] = new int [n];

            for (int k=0; k<n; k++)
            {
                tablica[i][j][k] = s;
                s++;
                cout << tablica[i][j][k] << " ";
            }
        cout << "" << endl;
        }
    cout << "" << endl;
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int k=0; k<n; k++)
            {
                tablica2[k][i][j] = tablica[i][j][k];
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int k=0; k<n; k++)
            {
                tablica[i][j][k] = tablica2[i][j][k];
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int k=0; k<n; k++)
            {
                cout << tablica[i][j][k] << " ";
            }
        cout << "" << endl;
        }
    cout << "" << endl;
    }


delete [] tablica2;

}



int main()
{
    int a;
    cin >> a;



    funkcja (new int**[a], a);




}

