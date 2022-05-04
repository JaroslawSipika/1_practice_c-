#include <iostream>
using namespace std;

class portfel{

private:
    int ilosc_pieniedzy;

public:
    void inicjuj();
    void zarobki(int);
    void wydatki(int);
    int zawartosc();
};


void portfel::inicjuj()
{
    ilosc_pieniedzy = 0;
}

void portfel::zarobki(int n)
{
    ilosc_pieniedzy = n;
}

void portfel::wydatki(int m)
{
    ilosc_pieniedzy = ilosc_pieniedzy - m;
}

int portfel::zawartosc()
{
    return ilosc_pieniedzy;
}


int main()
{
    portfel pierwszy;


    pierwszy.inicjuj();


    cout << "Jaka dodac kwote do portfela?" << endl;
    int zl;
    cin >> zl;

    pierwszy.zarobki(zl);

    cout << "Jaka wyplacic kwote z portfela?" << endl;
    int wyplata;
    cin >> wyplata;

    pierwszy.wydatki(wyplata);

    cout << pierwszy.zawartosc() << endl;

}
