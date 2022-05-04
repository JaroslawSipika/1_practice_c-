#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int figura;
    double a;
    double b;
    double h;
    double P;


    cout << "Program, ktory oblicza pola figur" << endl;
    cout << "Wybierz figure" << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Trojkat" << endl;
    cin >> figura;

    switch(figura)
    {
        case 1:
            cout << "Pole Kwadrata" << endl;
            cout << "Wpisz wymiar boku a" << endl;
            cin >> a;
            P=a*a;
            cout << "Pole wynosi: " << P << endl;
            break;
        case 2:
            cout << "Pole Prostokata" << endl;
            cout << "Wpisz wymiar boku a" << endl;
            cin >> a;
            cout << "Wpisz wymiar boku b" << endl;
            cin >> b;
            P=a*b;
            cout << "Pole wynosi: " << P << endl;
            break;
        case 3:
            cout << "Pole Trojkata" << endl;
            cout << "Wpisz wymiar boku a" << endl;
            cin >> a;
            cout << "Wpisz wysokosc h" << endl;
            cin >> h;
            P=0.5*a*h;
            cout << "Pole wynosi: " << P << endl;
            break;
        default:
            cout << "Nie ma takiej figury" << endl;

    }



}
