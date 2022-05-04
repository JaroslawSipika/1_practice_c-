#include <iostream>
#include <string>
using namespace std;

struct poczta{

        string nadawca;
        string odbiorca;
        string temat;
        string tresc;

        void wypisz();
        void wczytaj();

};

void poczta::wypisz ()
{
    cout << "Adresat: "  << nadawca << endl;
    cout << "Odbiorca: " << odbiorca << endl;
    cout << "Temat: "    << temat << endl;
    cout << "Tresc: "    << tresc << endl;
}

void poczta::wczytaj ()
{
    cout << "Podaj nadawce" << endl;
    cin >> nadawca;
    cout << "Podaj odbiorce" << endl;
    cin >> odbiorca;
    cout << "Podaj temat" << endl;
    cin >> temat;
    cout << "Podaj tresc" << endl;
    cin >> tresc;
}




int main()
{

    poczta wiadomosc1;

    wiadomosc1.wczytaj();
    wiadomosc1.wypisz();


}





