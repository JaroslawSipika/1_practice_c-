#include <iostream>
using namespace std;


class odcinek{

private:
    int x1;
    int y1;
    int x2;
    int y2;

public:
    void wczytaj(int, int, int, int);
    void wypisz();
    bool przeciecie(odcinek);

};

void odcinek::wczytaj(int a, int b, int c, int d)
{
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;
}

void odcinek::wypisz()
{
    cout << "Wspolrzedna x1" << endl;
    cout << x1 << endl;
    cout << "Wspolrzedna y1" << endl;
    cout << y1 << endl;
    cout << "Wspolrzedna x2" << endl;
    cout << x2 << endl;
    cout << "Wspolrzedna y2" << endl;
    cout << y2 << endl;
}

bool odcinek::przeciecie(odcinek od)
{

}


int main()
{
    odcinek odcinek1;

    int e, f, g, h;

    cout << "Podaj wspolrzedna x1" << endl;
    cin >> e;
    cout << "Podaj wspolrzedna y1" << endl;
    cin >> f;
    cout << "Podaj wspolrzedna x2" << endl;
    cin >> g;
    cout << "Podaj wspolrzedna y2" << endl;
    cin >> h;

    odcinek1.wczytaj(e,f,g,h);
    odcinek1.wypisz();

}
