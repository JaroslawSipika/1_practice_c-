#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cout << "Podaj dwie liczby n i m takie ze n<m" << endl;
    cin >> n;
    cin >> m;
    int iloczyn=1;

    for (n; n<=m; n++)
    {
        iloczyn = iloczyn*n;
        cout << iloczyn << endl;
    }
    cout << iloczyn << endl;
}
