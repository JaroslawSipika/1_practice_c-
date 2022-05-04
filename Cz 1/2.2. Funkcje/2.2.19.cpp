#include <iostream>
using namespace std;

int suma = 0;
int n;

int funkcjasuma (int n)
{
    suma = suma + n;
    cout << suma << endl;
    return n;
}

int main ()
{
    cout << "Podaj dowolna liczbe" << endl;
    cin >> n;

    cout << funkcjasuma (n) << endl;

    cout << funkcjasuma (6) << endl;
    cout << funkcjasuma (25) << endl;
}







