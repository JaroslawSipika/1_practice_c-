#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double x1, x2;
    double delta;

    cout << "Wpisz wspolczynniki rownania kwadratowego a, b oraz c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "a:" << a << " b:" << b << " c:" << c << endl;
    delta = b*b-4*a*c;

    if (delta>0)
    {
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;

        cout << "Dwa pierwiastki: x1:" << x1 << " x2:" << x2 << endl;
    }

    else if (delta==0)
    {
        x1=-b/(2*a);
        cout << "Jeden pierwiastek (podwojny): x:" << x1 << endl;
    }
    else cout <<  "Nie ma pierwiastkow";

}
