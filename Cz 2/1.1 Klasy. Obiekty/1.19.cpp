#include <iostream>
using namespace std;


class punkt3;

class punkt{

private:
    friend punkt rzutuj(punkt3);
    int x;
    int y;
public:
    void wczytaj();
    void wypisz();

};

class punkt3{

private:
    friend punkt rzutuj(punkt3);
    int x;
    int y;
    int z;
public:
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

punkt rzutuj(punkt3 p)
{
    punkt p2;
    p2.x = p.x;
    p2.y = p.y;
    cout << p2.x << endl;
    cout << p2.y << endl;
    return p2;
}


int main()
{

    punkt punkt1;
    punkt3 punkt2;


    punkt1.wczytaj();
    punkt1.wypisz();
    punkt2.wczytaj();
    punkt2.wypisz();

    rzutuj(punkt2);
}
