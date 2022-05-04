#include <iostream>
using namespace std;

class liczba{

public:
    double re;
    virtual double modul();
    bool wieksza(liczba&);

};

double liczba::modul()
{
    if (re>=0)
        return re;
    else
        return -re;
}

bool liczba::wieksza(liczba &referencja)
{
    if(this->modul()<referencja.modul())
        return true;
    else
        return false;
}

int main()
{
    liczba liczba1;
    liczba liczba2;
    liczba liczba3;

    liczba1.re = 5;
    liczba2.re = -3;
    liczba3.re = -9;

    liczba2.wieksza()
}
