#include <iostream>
#include <cmath>
using namespace std;

class liczba{

public:
    double re;
    virtual double modul();
    bool wieksza(liczba&);
};

class zespolone : public liczba
{

public:
    double im;
    double modul();
};

double liczba::modul()
{
    if(re>0)
        return re;
    else
        return -re;
}

double zespolone::modul()
{
    return sqrt(re*re+im*im);
}

bool liczba::wieksza(liczba &referencja)
{
    if (this->modul() < referencja.modul())
        return true;
    else
        return false;
}


int main()
{

    liczba liczba1;
    liczba1.re = -4;
    zespolone zespolona1;
    zespolone zespolona2;
    zespolona1.im = 5;
    zespolona1.re = -5;
    zespolona2.im = 3;
    zespolona2.re = -3;

    liczba *wsk = &liczba1;
    cout << wsk->modul() << endl;





}

