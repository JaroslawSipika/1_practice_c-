#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string godzina (int godz, int minut, int sek)
{
    stringstream wyn;

    wyn<< ((godz<10)?"0":"")<<godz;
    wyn<<":"<<((minut<10)?"0":"")<<minut;
    wyn<<":"<<((sek<10)?"0":"")<<sek;

    return wyn.str();

}



int main()
{
    int godzina1 = 4;
    int minuta1 = 43;
    int sekunda1 = 43;

    cout << godzina (godzina1, minuta1, sekunda1) << endl;
}
