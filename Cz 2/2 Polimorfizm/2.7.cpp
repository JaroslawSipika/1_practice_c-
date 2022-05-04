#include <iostream>
using namespace std;

class liczba{

public:
   virtual void wypisz();
   virtual void wczytaj();

};

class nint : public liczba
{
public:
    int wartosc = 0;
    void wypisz();
    void wczytaj();
};

class ndouble : public liczba
{
    double wartosc = 0;
    void wypisz();
    void wczytaj();
};

void nint::wczytaj()
{
    cin >> wartosc;
}

void nint::wypisz()
{
    cout << wartosc << endl;
}

void ndouble::wczytaj()
{
    cin >> wartosc;
}

void ndouble::wypisz()
{
    cout << wartosc << endl;
}

int main()
{

    nint nint1;
    liczba *wsk = &nint1;

    wsk -> wczytaj();
    wsk -> wypisz();






}
