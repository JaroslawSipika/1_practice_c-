#include <iostream>
using namespace std;

int funkcja (int **tablica1, int **tablica2, int n, int m)
{

    int **tablica3 = new int *[n];


    int k = 1;
    for (int i=0; i<n; i++)
    {
        tablica1[i] = new int [m];
        tablica2[i] = new int [m];
        tablica3[i] = new int [m];
        for (int j=0; j<m; j++)
        {
            tablica1[i][j] = k;
            tablica2[i][j] = k+1;
            k++;
        }
    }

    cout << tablica1[3][4] << endl;
    cout << tablica2[3][4] << endl;


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            tablica3[i][j] = tablica2[i][j];
            tablica2[i][j] = tablica1[i][j];
            tablica1[i][j] = tablica3[i][j];
        }
    }

    cout << tablica1[3][4] << endl;
    cout << tablica2[3][4] << endl;

    delete []tablica1;
    delete []tablica2;
    delete []tablica3;

}



int main()
{

    int a;
    int b;
    cin >> a;
    cin >> b;


    funkcja (new int *[a], new int*[a], a, b);





}

