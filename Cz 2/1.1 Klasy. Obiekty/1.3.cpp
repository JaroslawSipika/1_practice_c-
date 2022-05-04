#include <iostream>
#include <string>
using namespace std;

class poczta
{
    public:
        string nadawca;
        string odbiorca;
        string temat;
        string tresc;

};

void wczytaj (poczta &p)
{
    cout << "Podaj nadawce" << endl;
    cin >> p.nadawca;
    cout << "Podaj odbiorce" << endl;
    cin >> p.odbiorca;
    cout << "Podaj temat" << endl;
    cin >> p.temat;
    cout << "Podaj tresc" << endl;
    cin >> p.tresc;


    cout << "Adresat: "  << p.nadawca << endl;
    cout << "Odbiorca: " << p.odbiorca << endl;
    cout << "Temat: "    << p.temat << endl;
    cout << "Tresc: "    << p.tresc << endl;
}


int main()
{
    poczta poczta1;


    wczytaj (poczta1);
}

