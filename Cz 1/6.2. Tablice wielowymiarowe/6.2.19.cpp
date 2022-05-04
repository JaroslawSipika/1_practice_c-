#include <iostream>
using namespace std;

int funkcja (int **tablica1, int **tablica2, int n, int m)
{
    int k = 1;
    for (int i=0; i<n; i++)
    {
        tablica1[i] = new int [m];
        for (int j=0; j<m; j++)
        {
            tablica1[i][j] = k;
            k++;
        }
    }


    for (int i=0; i<n; i++)
    {
        tablica2[i] = new int [m];
        for (int j=0; j<m; j++)
        {
            tablica2[i][j] = tablica1[i][j];
        }
    }

    cout << tablica1[3][4] << endl;
    cout << tablica2[3][4] << endl;
}



int main()
{

    int a;
    int b;
    cin >> a;
    cin >> b;


    funkcja (new int *[a], new int*[a], a, b);





}
