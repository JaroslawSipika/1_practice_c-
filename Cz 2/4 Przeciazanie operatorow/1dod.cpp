#include <iostream>
using namespace std;

class Wektor{
public:
    double x,y,z;
    Wektor(double xp = 0, double yp = 0, double zp = 0) : x(xp), y(yp), z(zp) {};
    Wektor operator*(double liczba);
};

Wektor Wektor::operator*(double liczba){
    Wektor wynik;
    wynik.x = x*liczba;
    wynik.y = y*liczba;
    wynik.z = z*liczba;
    return wynik;
}

int main()
{
    Wektor a(1,1,1);
    Wektor b(-3,-10,15);
    Wektor c;

    c = a * 3.14;

    cout << c.x << endl;
    cout << c.y << endl;
    cout << c.z << endl;
}





