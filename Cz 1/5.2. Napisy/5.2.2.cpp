#include <iostream>
using namespace std;

int dlugosc (char *wsk)
{
    int i = 0;
    while (wsk[i] != 0 )
    {
        i++;
    }
return i;

}



int main()
{
    char tab[] = "Napis";

    cout << dlugosc (tab) << endl ;

}
