#include <iostream>
#include <string>
using namespace std;

class tab_osob;

class osoba{

private:
    string imie;
    string nazwisko;
public:
    void wczytaj(string, string);
    void wypisz();
    osoba(string, string);


};

class tab_osob{

private:
    osoba **tab;
    int rozmiar;

public:
    tab_osob(int, string, string);
    osoba &at (int);
    ~tab_osob();

};



tab_osob::tab_osob(int n, string a, string b)
{
    tab = new osoba*[n];
    rozmiar = n;
    for(int i=0; i<rozmiar; i++)
    {
        tab[i] = new osoba(a, b);
    }
}

osoba& tab_osob::at(int ind)
{
    return *tab[ind];
}

tab_osob::~tab_osob()
{
    for (int i=0; i<rozmiar; i++)
    {
        delete tab[i];
    }
    delete []tab;
}


osoba::osoba(string a, string b)
{
    imie = a;
    nazwisko = b;
    cout << imie << endl;
    cout << nazwisko << endl;
}

void osoba::wczytaj(string a, string b)
{
    imie = a;
    nazwisko = b;
}

void osoba::wypisz()
{
    cout << imie << endl;
    cout << nazwisko << endl;
}


int main()
{

    tab_osob przechowalnia(7, "Jaroslaw", "Sipika");


    cout << &przechowalnia.at(0) << endl;
    cout << &przechowalnia.at(5) << endl;
    cout << &przechowalnia.at(6) << endl;
}
