#include <iostream>
using namespace std;

int main ()
{
    int n, m, k;
    cout << "Podaj trzy liczby m < n < k" << endl;
    cin >> m;
    cin >> n;
    cin >> k;

    for (int i=n; i<k; i=i+n)
    {
        if (i>m)
        {
            cout << i << endl;
        }
        else
        {

        }

    }
}
