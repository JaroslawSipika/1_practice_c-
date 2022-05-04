#include <iostream>
#include <string>
using namespace std;

class ksiazka{

    public:

    string tytul;
    string autor;
    string wydawca;

};


void wczytaj (ksiazka &k)
{
    cin >> k.autor;
    cin >> k.tytul;
    cin >> k.wydawca;
}


void wypisz (ksiazka k)
{

    cout << k.autor << endl;
    cout << k.tytul << endl;
    cout << k.wydawca << endl;
}


int main()
{
    ksiazka ksiazka1;


    wczytaj(ksiazka1);
    wypisz(ksiazka1);


}


