#include <iostream>
using namespace std;

class punkt{

private:
    int x;
    int y;
public:
    void wczytaj(int, int);
    void wypisz();

};

void punkt::wczytaj(int a, int b)
{
    x = a;
    y = b;
}

void punkt::wypisz()
{
    cout << "wspolrzedna x: " << x << endl;
    cout << "wspolrzedna y: " << y << endl;
}


int main()
{

    int c;
    int d;
    cout << "Podaj wspolrzedna x" << endl;
    cin >> c;
    cout << "Podaj wspolrzedna y" << endl;
    cin >> d;

    punkt punkt1;
    punkt1.wczytaj(c, d);
    punkt1.wypisz();


}
