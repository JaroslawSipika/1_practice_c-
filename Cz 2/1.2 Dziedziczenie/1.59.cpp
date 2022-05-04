#include <iostream>
#include <string>
using namespace std;

class ubranie{

public:
    string material;
    string kolor;
};


class spodnie : public ubranie
{
public:
    double dlugosc;
    double w_pasie;
};

class koszula : public ubranie
{
public:
    double dlugosc;
    double w_klatce;
};

class czapka : public ubranie
{
    double obwod;
};


int main()
{
    ubranie ubranie1;

    ubranie1.material = "jedwab";

    cout << ubranie1.material << endl;
}
