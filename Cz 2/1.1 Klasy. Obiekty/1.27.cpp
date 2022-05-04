#include <iostream>
using namespace std;

class ukryta_liczba{

private:
    int liczba;
    friend int inkrementuj(ukryta_liczba &);
public:
    void zeruj();
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




int main()
{
    ukryta_liczba liczba1;
    liczba1.zeruj();

    cout << inkrementuj(liczba1) << endl;
    cout << inkrementuj(liczba1) << endl;
}

