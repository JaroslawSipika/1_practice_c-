#include <iostream>
using namespace std;

class ukryta_liczba{

private:
    int liczba;

public:
    void zeruj();
};

void ukryta_liczba::zeruj()
{

    liczba = 0;

}


int main()
{
    ukryta_liczba liczba1;
    liczba1.zeruj();
}
