#include <iostream>
using namespace std;

class trojkat{

    public:
    int wysokosc;
    int podstawa;

    void wczytaj();
    void wypisz();

    float pole();

};


void trojkat::wczytaj()
{
    cout << "Podaj wysokosc trojkata" << endl;
    cin >> wysokosc;

    cout << "Podaj podstawe trojkata" << endl;
    cin >> podstawa;

}

void trojkat::wypisz()
{
    cout << "Wysokosc: " << wysokosc << endl;
    cout << "Podstawa: " << podstawa << endl;

}

float trojkat::pole()
{
    return 0.5*wysokosc*podstawa;
}

int main()
{
    trojkat trojkat1;
    trojkat1.wczytaj();
    trojkat1.wypisz();
    cout << "Pole: " << trojkat1.pole() << endl;



}
