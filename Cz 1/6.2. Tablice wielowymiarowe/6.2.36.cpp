#include <iostream>
using namespace std;

void funkcja (int **tablica1, int n)
{
    int k = 1;
    for (int i=0; i<n; i++)
    {
        tablica1[i] = new int [n];

        for (int j=0; j<n; j++)
        {
            tablica1[i][j] = k;
            k++;
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


}



int main()
{

    int a;
    cin >> a;


    funkcja (new int *[a], a);





}

