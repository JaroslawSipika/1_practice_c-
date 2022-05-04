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


void porownanie (trojkat t1, trojkat t2)
{
    if (t1.pole() > t2.pole())
    {
    t1.wypisz();
    cout << "Pole: " << t1.pole() << endl;
    }
    else if (t2.pole() > t1.pole())
    {
    t2.wypisz();
    cout << "Pole: " << t2.pole() << endl;
    }
    else
    {
    cout << "Trojkaty rowne" << endl;
    }

}


float trojkat::pole()
{
    return 0.5*wysokosc*podstawa;
}

int main()
{
    trojkat trojkat1;
    trojkat trojkat2;
    trojkat1.wczytaj();
    trojkat2.wczytaj();

    porownanie (trojkat1, trojkat2);


}
