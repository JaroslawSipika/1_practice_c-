#include <iostream>
using namespace std;

void ***funkcja (int n, int m, int o, int ***tab)
{
        for (int i=0;i<n;i++)
        {
            tab[i]=new int *[m];

            for (int j=0;j<m;j++)
            {
                tab[n][m]=new int [o];

            }
        }
}

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    funkcja (a,b,c, new int **[a]);
}

