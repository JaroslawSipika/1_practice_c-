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


wypisz_tab(liczba *w)
{

}


int main()
{


    liczba **wsk = new liczba*[2];

    nint nint1;
    nint nint2;
    nint nint3;


    wsk[0] = new liczba;
    wsk[1] = new liczba;
    wsk[2] = new liczba;

    liczba liczba1;
    liczba liczba2;
    liczba liczba3;

    wsk[0] = &liczba1;
    wsk[1] = &liczba2;
    wsk[2] = &liczba3;

    wsk[0] -> wczytaj();
}

