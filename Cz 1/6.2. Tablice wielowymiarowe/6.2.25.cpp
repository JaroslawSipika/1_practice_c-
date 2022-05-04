#include <iostream>
using namespace std;

int funkcja (int **tablica, int n)
{
    int k = 0;
    for (int i=0; i<n; i++)
    {
        tablica[i] = new int [n];
        for (int j=0; j<n; j++)
        {
            tablica[i][j] = k;
            k++;
            cout << tablica[i][j] << " ";
        }
    cout << "" << endl;
    }

    for (int k=0; k<n; k++)
    {
        for(int j=0; j<n; j++)
        {
            for (int z=1; z<n; z++)
            {
                if((k+z)==j && k==(j-z))
                {
                int pojemnik = 0;
                pojemnik = tablica [k+z][j-z];
                tablica[k+z][j-z] = tablica[k][j];
                tablica[k][j] = pojemnik;
                }

            }

        }
    }



    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << tablica[i][j] << " ";
        }
    cout << "" << endl;

    }


}



int main()
{
    int a;
    cin >> a;



    funkcja (new int*[a], a);




}


