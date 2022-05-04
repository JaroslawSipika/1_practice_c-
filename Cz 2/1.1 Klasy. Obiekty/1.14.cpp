#include <iostream>
using namespace std;
class funkcja_kw{

public:
    int a;
    int b;
    int c;

    int wartosc(int);
    bool zero();

};

int funkcja_kw::wartosc(int x)
{
    return a*x*x+b*x+c;
}

bool funkcja_kw::zero()
{
    if (b*b-4*a*c < 0)
    {
        return false;
    }
    else return true;
}


int main ()
{
    funkcja_kw kw1;

    kw1.a = 5;
    kw1.b = 7;
    kw1.c = 2;

    int d;
    cin >> d;

    cout << kw1.wartosc(d) << endl;
    cout << kw1.zero() << endl;


}
