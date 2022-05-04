#include <iostream>
using namespace std;

int n;
int k=1;

int silnia (int n)
{
    for (int i=1; i<=n; i++)
    {
        k=k*i;
    }
    return k;
}

int main()
{
    cout << "Podaj nieujemna liczbe n" << endl;
    cin >> n;

    cout << "silnia z liczby n wynosi: " << silnia(n) << endl;
}
