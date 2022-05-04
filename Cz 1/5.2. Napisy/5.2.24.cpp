#include <iostream>
#include <string>
using namespace std;

void kopiuj(string napisek, char *wnap)
{
    cout << napisek << endl;
    cout << wnap << endl;


    for (int i=0; wnap[i]!=0; i++)
    {
        wnap[i] = napisek[i];
    }

    cout << wnap << endl;

}


int main()
{
    string napis = "KORONA";

    char *nap = new char[napis.size()];

    kopiuj (napis, nap);
}
