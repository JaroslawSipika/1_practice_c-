#include <iostream>
using namespace std;

int funkcja (int n, int tabliczka[][100][100])
{
    int licznik = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<100; j++)
        {
            for (int k=0; k<100; k++)
            {
                tabliczka[i][j][k] = 1;
                licznik = licznik + tabliczka [i][j][k];
            }
        }
    }

cout << licznik << endl;

}


int main ()
{

    int a = 1;
    int tabliczka [a][100][100];

    funkcja (a, tabliczka);



}
