#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int pierw;
    cout << "Podaj liczbe calkowita n: " << endl;
    cin >> n;

    for (i=0; i<n; i++)
    {
        if (i*i <= n)
        {
              pierw = i;
              cout << pierw << endl;
        }

    }

    cout << pierw << endl;
}
