#include <iostream>
#include <string>

using namespace std;

class zwierze{

public:
    string gatunek;
    string imie;
};

class zmija : public zwierze
{
public:
    int dlugosc;
    zmija();
};

zmija::zmija()
{
    gatunek = "zygzakowata";
}

class rys : public zwierze
{
public:
    int dlugosc;
    int wysokosc;
    rys();
};

rys::rys()
{
    gatunek = "lesny";
}

class orzel : public zwierze
{
public:
    int dlugosc;
    int rozpietosc_skrzydel;
    orzel();
};

orzel::orzel()
{
    gatunek = "bielik";
}

int main ()
{
    orzel orzel1;
    rys rys1;
    zmija zmija1;

    cout << orzel1.gatunek << endl;
    cout << rys1.gatunek << endl;
    cout << zmija1.gatunek << endl;

}
