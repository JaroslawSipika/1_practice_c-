#include <iostream>
using namespace std;

int iloczyn = 1;
int n;
int m;

int potega (int n, int m=2)
{
    if (n==0)
        return 0;

    if (n>0)
    {
        for (int i=1; i<=m; i++)
        {
            iloczyn = iloczyn * n;
        }
    return iloczyn;
    }
}

int main()
{
    cout << "Podaj n oraz m" << endl;
    cin >> n;
    cin >> m;
    cout << potega(n,m) << endl;
}
