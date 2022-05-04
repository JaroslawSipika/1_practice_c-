#include <iostream>
using namespace std;

int *funkcja (int n)
{
    return new int[n];
}

int main()
{
    int a;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> a;



    cout << funkcja(a) << endl;
}

