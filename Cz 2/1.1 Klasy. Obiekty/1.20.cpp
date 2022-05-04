#include <iostream>
using namespace std;


class punkt3;

class punkt{

private:
    int x;
    int y;
public:
    void wczytaj();
    void rzutuj(punkt3);
    void wypisz();

};

class punkt3{

private:
    int x;
    int y;
    int z;
public:
    friend void punkt::rzutuj(punkt3);
    void wczytaj();
    void wypisz();

};

void punkt::wczytaj()
{
    cout << "Podaj wspolrzedna x" << endl;
    cin >> x;
    cout << "Podaj wspolrzedna y" << endl;
    cin >> y;
}

void punkt3::wczytaj()
{
    cout << "Podaj wspolrzedna x" << endl;
    cin >> x;
    cout << "Podaj wspolrzedna y" << endl;
    cin >> y;
    cout << "Podaj wspolrzedna z" << endl;
    cin >> z;
}

void punkt::wypisz()
{
    cout << "wspolrzedna x: " << x << endl;
    cout << "wspolrzedna y: " << y << endl;
}

void punkt3::wypisz()
{
    cout << "wspolrzedna x: " << x << endl;
    cout << "wspolrzedna y: " << y << endl;
    cout << "wspolrzedna z: " << z << endl;
}

void punkt::rzutuj(punkt3 p1)
{
    x = p1.x;
    y = p1.y;
    cout << "Po rzutowaniu" << endl;
    cout << "wspolrzedna x: " << x << endl;
    cout << "wspolrzedna y: " << y << endl;
}

int main()
{

    punkt punkt1;
    punkt3 punkt2;


    punkt1.wczytaj();
    punkt1.wypisz();
    punkt2.wczytaj();
    punkt2.wypisz();

    punkt1.rzutuj(punkt2);
}
