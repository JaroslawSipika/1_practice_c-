#include <iostream>
using namespace std;

void funkcja (int **tabliczka, int n, int m)
{
    int k = 1;
    for (int i=0; i<n; i++)
    {
        tabliczka[i] = new int [m];
        for (int j=0; j<m; j++)
        {
            tabliczka[i][j] = k;
            k++;
            cout << tabliczka [i][j] << " ";
        }
    cout << " " << endl;
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
