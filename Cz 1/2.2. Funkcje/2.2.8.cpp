#include <iostream>
using namespace std;

int i;
int n;

int zaokraglenie (int n)
{
    for (i=1; i*i<n; i++)
    {
        cout << i << endl;
    }
    i--;
    return i;
}

int main()
{
    cout << "Podaj liczbe n" << endl;
    cin >> n;

    cout << "zaokraglenie w dol z pierwiastka z n wynosi: " << zaokraglenie(n) << endl;
}
