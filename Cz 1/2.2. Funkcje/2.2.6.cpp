#include <iostream>
using namespace std;

int k;
int j=1;
int n;
int m;

int potega(int n, int m)
{
    if (m>1)
    {
        for(int i=1; i<=m; i++)
        {
            k = n;
            j = j * k;
        }
    }

    else
    {
        j=1;
    }

    return j;
}

int main()
{
    cout << "Podaj liczbe n oraz m nieujemna n^m" << endl;
    cin >> n;
    cin >> m;
    cout << "Wynik 2^n wynosi:" << potega(n,m) << endl;
}



