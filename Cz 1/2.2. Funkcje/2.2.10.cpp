#include <iostream>
using namespace std;

int NWD(int p, int d)
{
    while (p != d)
        if(p > d)
            p = p - d;
        else
            d = d - p;
    return p;
}

int suma(int n)
{
    int i;
    int sum = 0;

    for (i=1; i<n; i++)
    {
        if (NWD(i,n) == 1)
            sum +=i;
            cout << sum << endl;
    }
    return sum;
}

int main ()
{
    int n;
    cout << "Podaj liczbe calkowita" << endl;
    cin >> n;
    cout << "Wynik obliczen to:" << suma(n) << endl;
    return 0;
}
