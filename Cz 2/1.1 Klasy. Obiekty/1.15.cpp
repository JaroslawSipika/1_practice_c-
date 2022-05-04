#include <iostream>
using namespace std;

class liczba{
private:
    int wartoscliczb;

public:
    void wczytaj();
    void wypisz();
    void nadaj_w(int);
    int wartosc();
    unsigned int abs();

};

void liczba::wczytaj()
{
    cout << "Podaj wartosc" << endl;
    cin >> wartoscliczb;
}
void liczba::wypisz()
{
    cout << wartoscliczb << endl;
}
void liczba::nadaj_w(int n)
{
    wartoscliczb = n;
}
int liczba::wartosc()
{
    return wartoscliczb;
}
unsigned int liczba::abs()
{
    cout << "Wartosc bezwzgledna" << endl;
    if (wartoscliczb<0)
    {
    return -wartoscliczb;
    }
    else wartoscliczb;
}

int main()
{
    int a;
    liczba liczba1;
    liczba1.wczytaj();
    liczba1.wypisz();
    cout << "Podaj nowa wartosc dla liczby" << endl;
    cin >> a;
    liczba1.nadaj_w(a);
    cout << liczba1.wartosc() << endl;
    cout << liczba1.abs() << endl;
}
