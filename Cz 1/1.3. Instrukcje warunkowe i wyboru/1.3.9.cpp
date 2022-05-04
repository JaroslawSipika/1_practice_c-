#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double wynik;
    int dzialanie;

    cout << "Kalkulator" << endl;
    cout << "Wybierz dzialanie" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cin >> dzialanie;
    switch(dzialanie)
    {
    case 1:
        cout << "Podaj dwie liczby a i b" << endl;
        cin >> a;
        cin >> b;
        wynik=a+b;
        cout << "Wynik a+b : " << wynik << endl;
        break;
    case 2:
        cout << "Podaj dwie liczby a i b" << endl;
        cin >> a;
        cin >> b;
        wynik=a-b;
        cout << "Wynik a-b : " << wynik << endl;
        break;
    case 3:
        cout << "Podaj dwie liczby a i b" << endl;
        cin >> a;
        cin >> b;
        wynik=a*b;
        cout << "Wynik a*b : " << wynik << endl;
        break;
    case 4:
        cout << "Podaj dwie liczby a i b" << endl;
        cin >> a;
        cin >> b;
        if (b==0)
        {
            cout << "Nie dziel przez zero" << endl;
            return 0;
        }
        wynik=a/b;
        cout << "Wynik a/b : " << wynik << endl;
        break;
    default:
        cout << "Nie ma takiego dzialania" << endl;
    }

}
