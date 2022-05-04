#include <iostream>
using namespace std;

int funkcja (int **tabliczka, int n, int m)
{
    int suma = 0;
    for (int i=0; i<n; i++)
    {
        tabliczka[i] = new int [m];
        for (int j=0; j<m; j++)
        {
            tabliczka[i][j] = 2;
            suma = suma + tabliczka[i][j];
        }
    }

cout << suma << endl;

}

int main()
{
    int a = 5;
    int b = 10;

    funkcja (new int *[a], a, b);



}
