#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Podaj element ciagu Fibonacciego: " << endl;
    cin >> n;
    int pom;
    int fib0 = 0;
    int fib1 = 1;
    int fib2 = 1;

    if (n==0)
    {
        cout << fib0 << endl;
    }
    else if (n==1)
    {
        cout << fib1 << endl;
    }

    else
    {
        for (int i=2; i<=n; i++)
        {
            pom = fib1;
            fib1 = fib1+fib2;
            fib2 = pom;
        }
    cout << fib2 << endl;
    }
}
