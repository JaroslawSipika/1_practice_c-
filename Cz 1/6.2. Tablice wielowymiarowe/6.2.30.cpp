#include <iostream>
using namespace std;

int funkcja (int **tablica1, int **tablica2, int n)
{
    int **tablica3 = new int *[n];
    int k = 1;
    for (int i=0; i<n; i++)
    {
        tablica1[i] = new int [n];
        tablica2[i] = new int [n];
        tablica3[i] = new int [n];

        for (int j=0; j<n; j++)
        {
            tablica1[i][j] = k;
            tablica2[i][j] = k+1;
            k++;
        }
    }


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            tablica3[i][j] = tablica1[i][j] + tablica2 [i][j];
        }
    }

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
            cout << tablica1[i][j] << " ";
            }
        cout << "" << endl;
        }

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
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

    int a;
    cin >> a;


    funkcja (new int *[a], new int*[a], a);





}
