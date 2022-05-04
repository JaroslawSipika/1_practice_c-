#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    int NWD=1;
    int max;

    cout << "Podaj liczbe calkowita n " << endl;
    cin >> n;
    cout << "Podaj liczbe calkowita m " << endl;
    cin >> m;

    if (n>m)
    {
        max = n;
    }
    else
    {
        max = m;
    }

    for (int i=2; i<=max; i++)
    {
        if ((n%i==0) && (m%i==0))
        {
            NWD = i;
            cout << NWD << endl;
        }
    }
cout << "NWD liczb m i n wynosi:" << NWD << endl;

}
