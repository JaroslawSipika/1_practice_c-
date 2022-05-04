#include <iostream>
using namespace std;

class funkcja{

public:
    int x;
    virtual int wartosc();
};


class funkcja_liniowa : public funkcja
{

public:
    int a;
    int b;
    int wartosc();
};

int funkcja::wartosc()
{
    return x;
}

int funkcja_liniowa::wartosc()
{
    return a*x+b;
}

int main()
{

    funkcja_liniowa funkcja_liniowa1;
    funkcja *wsk = &funkcja_liniowa1;


    funkcja_liniowa1.a = 5;
    funkcja_liniowa1.b = 3;
    funkcja_liniowa1.x = 3;

    cout << wsk -> wartosc() << endl;

    funkcja funkcja1;
    funkcja1.x = 7;
    wsk = &funkcja1;

    cout << wsk -> wartosc() << endl;

}
