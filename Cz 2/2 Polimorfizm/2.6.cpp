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


double bisekcja (funkcja *f, double p, double k, double d)
{
    double wp;
    double wk;
    double ws;

    f->x=p;
    wp=f->wartosc();

    f->x=k;
    wk=f->wartosc();


    if (wp*wk <= 0)
    {
        while (k-p>d)
        {
            f->x=(k+p)/2;
            ws=f->wartosc();
            if (wp*ws <= 0)
                k = f->x;
            else
                p = f->x;
        }
    return p;
    }
}

int main()
{
    funkcja_liniowa funkcja_liniowa1;

    funkcja_liniowa1.a = 5;
    funkcja_liniowa1.b = 3;



    cout << bisekcja(&funkcja_liniowa1, 10, 24, 13) << endl;


}
