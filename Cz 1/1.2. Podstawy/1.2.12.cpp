#include <iostream>
using namespace std;

int main()
{
    double a;
    cout << "Podaj liczbe wymierna: "<< endl;
    cin >> a;
    cout.setf(ios::scientific);
    cout << a;
}

