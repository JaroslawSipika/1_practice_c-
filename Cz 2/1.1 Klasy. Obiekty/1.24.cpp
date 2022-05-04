#include <iostream>
#include <string>
using namespace std;

class dane_os{

private:
    string imie;
    string nazwisko;
    string adres;

public:
    void wczytaj(string, string, string);
    void wypisz();

};

void dane_os::wczytaj(string a, string b, string c)
{
    imie = a;
    nazwisko = b;
    adres = c;
}

void dane_os::wypisz()
{
    cout << imie << endl;
    cout << nazwisko << endl;
    cout << adres << endl;
}

int main()
{
    cout << "Podaj imie" << endl;
    string imie;
    cin >> imie;
    cout << "Podaj nazwisko" << endl;
    string nazwisko;
    cin >> nazwisko;
    cout << "Podaj adres" << endl;
    string adres;
    cin >> adres;

    dane_os pierwszy;

    pierwszy.wczytaj(imie, nazwisko, adres);
    pierwszy.wypisz();

}
