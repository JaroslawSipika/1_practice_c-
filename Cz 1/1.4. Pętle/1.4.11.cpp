#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double d;
    cout << "Podaj liczbe a: " << endl;
    cin >> a;
    cout << "Podaj liczbe b: " << endl;
    cin >> b;
    cout << "Podaj liczbe c: " << endl;
    cin >> c;
    cout << "Podaj liczbe d: " << endl;
    cin >> d;

    int x = 0;

    do
    {
        x++;
    } while (abs(a)*x*x+b*x+c<d);
     cout << "najmniejsza wartosc x to: " << x << endl;
}

