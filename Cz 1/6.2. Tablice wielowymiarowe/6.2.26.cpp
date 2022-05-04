#include <iostream>
using namespace std;

int funkcja (int **tablica, int n, int m)
{
    int **tablica2 = new int*[m];

    for (int i=0; i<m; i++)
    {
       tablica2[i] = new int [n];
    }


    int k = 0;
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


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (i==j)
            {
                tablica2[i][j] = tablica[i][j];
            }
            else if (i!=j)
            {
                tablica2[j][i] = tablica[i][j];
            }
        }

    }




    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << tablica2[i][j] << " ";
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

