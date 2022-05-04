#include <iostream>
#include <string>
using namespace std;

class mebel{

public:
    string producent;
    string kolekcja;
};

class krzeslo : public mebel
{
public:
    string obicie;
};

class stol : public mebel
{
public:
    double szerokosc;
    double dlugosc;
};

class szafka : public mebel
{
public:
    double szerokosc;
    double wysokosc;
    double glebokosc;
};


int main()
{

    szafka szafka1;

    szafka1.producent = "Bodzio";

    cout << szafka1.producent << endl;







}
