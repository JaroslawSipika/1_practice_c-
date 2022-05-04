#include <iostream>
using namespace std;

int i;
int n;
int m;
int k=1;
int j=1;

int zaokraglenie (int n, int m)
{
    for (i=1; k<n; i++)
    {
        for (int k=0; k<m; k++)
        {
            j=j*i;
            cout << j << endl;
        }
        k = j;
        j = 1;
        cout << i << endl;
    }
    i--;
    i--;
    return i;
}

int main()
{
    cout << "Podaj liczbe n" << endl;
    cin >> n;
    cout << "Podaj liczbe m" << endl;
    cin >> m;

    cout << "zaokraglenie w dol z pierwiastka z n wynosi: " << zaokraglenie(n,m) << endl;
}
