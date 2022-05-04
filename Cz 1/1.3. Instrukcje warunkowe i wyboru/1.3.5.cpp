#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double h;
    int wybor;
    double p;
    double o;

    cout << "Program, ktory liczy pole trojkata" << endl;
    cout << "Wybierz metode 1 lub 2" << endl;
    cout << "1. Obliczam pole na podstawie podstawy oraz wysokosci" << endl;
    cout << "2. Obliczam pole na podstawie trzech bokow" << endl;
    cin >> wybor;

    switch(wybor){
        case 1:
            cout << "podaj dlugosc podstawy" << endl;
            cin >> a;
            cout << "podaj wysokosc" << endl;
            cin >> h;
            p=(0.5)*a*h;
            cout << "pole trojkata wynosi: " << p << endl;
            break;
        case 2:
            cout << "podaj dlugo9sc pierwszego boku" << endl;
            cin >> a;
            cout << "podaj dlugosc drugiego boku" << endl;
            cin >> b;
            cout << "podaj dlugosc trzeciego boku" << endl;
            cin >> c;
            o=(a+b+c)/2;
            p=sqrt(o*(o-a)*(o-b)*(o-c));
            cout << "pole trojkata wynosi: " << p << endl;
            break;
    }

}
