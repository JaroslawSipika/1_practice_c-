#include <iostream>
using namespace std;

int k;
int n;

int najKa (int n)
{
    for (int k=n-1; k>0; k--)
    {
        if (n%k==0)
        {
            return k;
        }
    }
}

int main()
{
    cout << "Podaj liczbe n>2 " << endl;
    cin >> n;

    cout << "Najwieksza liczba k taka ze k dzieli n to: " << najKa(n) << endl;
}
