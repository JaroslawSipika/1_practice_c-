#include <iostream>
using namespace std;

int funkcja(int n, int*w)
{
    *w = n;
    return *w;

}


int main()
{
    int n;

    cout << "Podaj wartosc n" << endl;
    cin >> n;

    int z;

    int *x = &z;

    cout << funkcja (n, &z) << endl;
    cout << z << endl;
}
