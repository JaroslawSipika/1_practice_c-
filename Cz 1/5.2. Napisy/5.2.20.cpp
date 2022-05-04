#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

char *godzina (int godz, int minut, int sek)
{
    char *wyn;

    wyn = new char[9*sizeof(char)];

    sprintf(wyn,"%02d:%02d:%02d", godz,minut,sek);

    return wyn;



}


int main()
{

    int godzina1 = 13;
    int minuta1 = 53;
    int sekunda1 = 45;

    cout << godzina (godzina1, minuta1, sekunda1) << endl;


}
