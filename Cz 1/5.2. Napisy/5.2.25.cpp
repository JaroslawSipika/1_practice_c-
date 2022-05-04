#include <iostream>
#include <string>

using namespace std;

void kopiuj (string napis1, char *napis2)
{
    char *nowa = new char [napis1.size()-1];

    int i;
    for (i=0; napis1[i]!=0; i++)
    {
        nowa[i] = napis1[i];
    }

    nowa[i] = 0;
    napis2 = nowa;

    cout << napis2 << endl;
}

int main()
{
    string napis11 = "KORONA";

    char *wtab2 = new char[napis11.size()-1];

    kopiuj (napis11, wtab2);

}
