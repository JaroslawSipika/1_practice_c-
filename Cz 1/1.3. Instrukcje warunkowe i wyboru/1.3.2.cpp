#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Podaj 2 liczby calkowite: " << endl;
    cin >> a;
    cin >> b;
    if (a>b) cout << a << endl;
    else if (b>a) cout << b << endl;
    else cout << a << endl;
}
