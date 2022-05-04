#include <iostream>
using namespace std;

class zespolone {
public:
    double re;
    double im;
};

zespolone operator+ (const zespolone&a, const zespolone &b)
{
    zespolone z;
    z.re = a.re + b.re;
    z.im = a.im + b.im;
    return z;
}

ostream& operator << (ostream& out, const zespolone &z)
{
    out << "re = "<< z.re << " im = "<<z.im;
    return out;
}

istream& operator >> (istream& in, zespolone& z)
{
    in >> z.re >> z.im;
    return in;
}



int main()
{
    zespolone d;
    d.re = 4;
    d.im = 5;

    zespolone e;
    e.re = 3;
    e.im = 10;

    zespolone f;

    f = d + e;

    zespolone g;

    cin >> g;

    cout << f.re << endl;
    cout << f.im << endl;

    cout << f << endl;
    cout << g << endl;
}
