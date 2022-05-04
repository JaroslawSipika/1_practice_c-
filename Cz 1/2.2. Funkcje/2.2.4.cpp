#include <iostream>
using namespace std;

int k=2;
int j=2;
int n;

int potega(int n)
{
    if (n>1)
    {
        for(int i=2; i<=n; i++)
        {
            j = j * k;
        }
    }
    else if (n==1)
    {
        j=2;
    }
    else
    {
        j=1;
    }
    return j;
}

int main()
{
    cout << "Podaj liczbe n nieujemna 2^n" << endl;
    cin >> n;
    cout << "Wynik 2^n wynosi:" << potega(n) << endl;
}

