#include <iostream>
#include <string>
using namespace std;

class ksiazka{

    public:

    string tytul;
    string autor;
    string wydawca;

};



void wypisz (ksiazka ksiazka1)
{

    cout << ksiazka1.autor << endl;
    cout << ksiazka1.tytul << endl;
    cout << ksiazka1.wydawca << endl;


}

int main()
{
    ksiazka ksiazka1;

    cin >> ksiazka1.autor;
    cin >> ksiazka1.tytul;
    cin >> ksiazka1.wydawca;

    wypisz(ksiazka1);

}

