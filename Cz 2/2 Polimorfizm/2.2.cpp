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
    if(re>0)
        return re;
    else
        return -re;
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
    liczba liczba2;
    liczba1.re = -4;
    liczba2.re = -6;

    liczba1.modul();

    cout << liczba1.wieksza(liczba2) << endl;


}
