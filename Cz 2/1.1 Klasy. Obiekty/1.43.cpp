#include <iostream>
#include <string>
using namespace std;

class osoba{

private:
    string imie;
    string nazwisko;
public:
    void wczytaj(string, string);
    void wypisz();
    osoba(string, string);


};

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
    osoba osoba1("Jaroslaw","Sipika");

    string i;
    string n;

    cout << "Podaj imie" << endl;
    cin >> i;
    cout << "Podaj nazwisko" << endl;
    cin >> n;
    osoba1.wczytaj(i,n);
    osoba1.wypisz();
}
