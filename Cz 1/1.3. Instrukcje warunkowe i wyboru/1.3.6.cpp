#include <iostream>
using namespace std;

int main ()
{
    double a1, b1, c1;
    double a2, b2, c2;
    double x, y;
    double Wx, Wy, W;

    cout << "Podaj wspolczynniki ukladu rownan" << endl;
    cout << "Podaj a1" << endl;
    cin >> a1;
    cout << "Podaj b1" << endl;
    cin >> b1;
    cout << "Podaj c1" << endl;
    cin >> c1;
    cout << "Podaj a2" << endl;
    cin >> a2;
    cout << "Podaj b2" << endl;
    cin >> b2;
    cout << "Podaj c2" << endl;
    cin >> c2;
    cout << "Wspolczynniki, ktore podales: " << endl;
    cout << "a1:" << a1 << " b1:" << b1 << " c1:" << c1 << endl;
    cout << "a2:" << a2 << " b2:" << b2 << " c2:" << c2 << endl;

    W=a1*b2-b1*a2;
    Wx=c1*b2-b1*c2;
    Wy=a1*c2-c1*a2;

    if (W!=0)
    {
        x=Wx/W;
        y=Wy/W;
        cout << "Rozwiazanie rownania: x=" << x << " y=" << y << endl;

    }

    else if (W==0 && Wx==0 && Wy==0) cout << "Uklad ma nieskonczenie wiele rozwiazan" << endl;
    else if (W==0 && (Wx==0 || Wy==0)) cout << "Uklad nie ma rozwiazan. Sprzeczny" << endl;
}
