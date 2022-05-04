#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Podaj dwie liczby calkowite" << endl;
    cin >>n;
    cin >>m;

    for (int i=1; i<=m; i++)
    {
        int k;
        k=n*i;
        cout << k << endl;
    }

}
