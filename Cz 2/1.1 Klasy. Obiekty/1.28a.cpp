#include <iostream>
using namespace std;

class ukryta_liczba{

private:
    int liczba;
    friend int inkrementuj(ukryta_liczba &);
public:
    void zeruj();
    int inkrementacja(ukryta_liczba &);
};

void ukryta_liczba::zeruj()
{

    liczba = 0;

}

int inkrementuj(ukryta_liczba &ukryta)
{

    ukryta.liczba = ukryta.liczba + 1;
    return ukryta.liczba;
}

int ukryta_liczba::inkrementacja(ukryta_liczba &u)
{
    u.liczba++;
    return u.liczba;
}


int main()
{
    ukryta_liczba liczba1;
    liczba1.zeruj();

    cout << inkrementuj(liczba1) << endl;
    cout << inkrementuj(liczba1) << endl;
    cout << liczba1.inkrementacja(liczba1) << endl;
    cout << liczba1.inkrementacja(liczba1) << endl;
}


