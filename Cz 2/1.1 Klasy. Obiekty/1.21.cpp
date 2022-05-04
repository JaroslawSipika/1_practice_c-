#include <iostream>
using namespace std;

class zespolona{

private:
    int RE;
    int IM;

public:
    void wczytaj(int, int);
    void wypisz();


};

void zespolona::wczytaj(int x, int y)
{
    RE = x;
    IM = y;
}

void zespolona::wypisz()
{
    cout << "z=" << RE << "+" << IM << "i" << endl;
}



int main()
{
    int a;
    int b;

    cout << "Podaj czesc rzeczywista" << endl;
    cin >> a;
    cout << "Podaj czesc urojona" << endl;
    cin >> b;

    class zespolona liczba1;

    liczba1.wczytaj(a,b);
    liczba1.wypisz();
}
