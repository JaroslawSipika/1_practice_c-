#include <iostream>
using namespace std;

double *funkcja (int n)
{
    return new double[n];
}


int main()
{
    int a;
    cin >> a;

    cout << funkcja (a) << endl;
}
