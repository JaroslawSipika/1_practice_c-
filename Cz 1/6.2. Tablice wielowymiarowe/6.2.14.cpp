#include <iostream>
using namespace std;

int funkcja (unsigned int tablica[][10][10])
{
    unsigned int licznik = 0;
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            for (int k=0; k<10; k++)
            {
                tablica[i][j][k] = 1;
                licznik = licznik + tablica[i][j][k];
            }
        }
    }

cout << licznik << endl;

}


int main ()
{

    unsigned int tablica[10][10][10];


    funkcja (tablica);



}
