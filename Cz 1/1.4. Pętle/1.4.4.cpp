#include <iostream>
using namespace std;

int main()
{
    cout << "Podaj nieujemna liczbe calkowita" << endl;
    int n;
    int silnia=1;
    cin >> n;

    cout << "Silnia z liczby n to:" << endl;

    for (int i=1; i<=n; i++)
    {

        silnia *= i;

    }
    cout << silnia << endl;
}
