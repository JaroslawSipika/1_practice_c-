#include <iostream>
using namespace std;

class ukryta_liczba{

private:
    int liczba;
    //friend int inkrementuj(ukryta_liczba &);
public:
    int inkrementuj();
    void zeruj();
};

void ukryta_liczba::zeruj()
{

    liczba = 0;

}

/*int inkrementuj(ukryta_liczba &ukryta)
{

    ukryta.liczba = ukryta.liczba + 1;
    return ukryta.liczba;
}*/

int ukryta_liczba::inkrementuj()
{
    liczba = liczba + 1;
    return liczba;
}


int main()
{
    ukryta_liczba liczba1;
    liczba1.zeruj();

    cout << liczba1.inkrementuj() << endl;
    cout << liczba1.inkrementuj() << endl;




}

