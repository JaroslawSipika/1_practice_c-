#include <iostream>
using namespace std;

int main()
{
    double a;
    cout << "Podaj liczbe wymierna: "<< endl;
    cin >> a;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout << fixed << a;
}
