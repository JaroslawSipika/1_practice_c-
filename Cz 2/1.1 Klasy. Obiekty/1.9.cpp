#include <iostream>
#include <string>
using namespace std;

class ksiazka{

    public:

    string tytul;
    string autor;
    string wydawca;

    void wczytaj();
    void wypisz();

};


void ksiazka::wczytaj ()
{
    cin >> autor;
    cin >> tytul;
    cin >> wydawca;
}


void ksiazka::wypisz ()
{

    cout << autor << endl;
    cout << tytul << endl;
    cout << wydawca << endl;
}


int main()
{
    ksiazka ksiazka1;


    ksiazka1.wczytaj();
    ksiazka1.wypisz();


}


