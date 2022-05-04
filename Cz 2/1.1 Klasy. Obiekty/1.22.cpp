#include <iostream>
using namespace std;

class zespolona{

private:
    friend void suma(zespolona, zespolona);
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

void suma(zespolona l1,zespolona l2)
{
    int dodawanie_RE;
    int dodawanie_IM;
    dodawanie_RE = l1.RE + l2.RE;
    dodawanie_IM = l1.IM + l2.IM;
    cout << "z=" << dodawanie_RE << "+" << dodawanie_IM << "i" << endl;
}


int main()
{
    int a;
    int b;
    int c;
    int d;

    cout << "Podaj czesc rzeczywista" << endl;
    cin >> a;
    cout << "Podaj czesc urojona" << endl;
    cin >> b;
    cout << "Podaj czesc rzeczywista" << endl;
    cin >> c;
    cout << "Podaj czesc urojona" << endl;
    cin >> d;
    zespolona liczba1;
    zespolona liczba2;

    liczba1.wczytaj(a,b);
    liczba1.wypisz();
    liczba2.wczytaj(c,d);
    liczba2.wypisz();

    suma(liczba1, liczba2);
}

