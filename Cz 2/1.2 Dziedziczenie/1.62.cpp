#include <iostream>
#include <string>

using namespace std;

class atrakcja{

protected:
    double cena;
    string nazwa;
    string opis;

public:
    void zwroc();
};

void atrakcja::zwroc()
{
    cout << cena << endl;
    cout << nazwa << endl;
    cout << opis << endl;
}

class kolejka : public atrakcja
{
public:
    double godz_odjazdu;
    double godz_przyjazdu;
    double zwroc_godz_odjazdu(){return godz_odjazdu;};
    double zwroc_godz_przyjazd() {return godz_przyjazdu;};
    void inicjuj(double, double, double, string, string);
};

void kolejka::inicjuj(double godz_odjazdu, double godz_przyjazdu, double cena, string nazwa, string opis)
{
    this->godz_odjazdu = godz_odjazdu;
    this->godz_przyjazdu = godz_przyjazdu;
    this->cena = cena;
    this->nazwa = nazwa;
    this->opis = opis;
}


class zamek : public atrakcja
{
public:
    double czas_zwiedzania;
    double zwroc_czas_zwiedzenia(){return czas_zwiedzania;};
    void inicjuj(double, double, string, string);
};

void zamek::inicjuj(double czas_zwiedzania, double cena, string nazwa, string opis)
{
    this->czas_zwiedzania = czas_zwiedzania;
    this->cena = cena;
    this->nazwa = nazwa;
    this->opis = opis;
}

class film : public atrakcja
{
public:
    double czas_trwania;
    string tytul;
    double zwroc_czas_trwania(){return czas_trwania;};
    string zworc_tytul(){return tytul;};
    void inicjuj(double, string, double, string, string );
};

void film::inicjuj(double czas_trwania, string tytul, double cena, string nazwa, string opis)
{
    this->czas_trwania = czas_trwania;
    this->tytul = tytul;
    this->cena = cena;
    this->nazwa = nazwa;
    this->opis = opis;
}

int main()
{
   film film1;

   double a = 0.5;
   string b = "Klan";
   double c = 5;
   string d = "Filmek";
   string e = "Komedia";
   film1.inicjuj(a,b,c,d,e);
   cout << film1.zworc_tytul() << endl;
   cout << film1.zwroc_czas_trwania() << endl;
   film1.zwroc();


}
