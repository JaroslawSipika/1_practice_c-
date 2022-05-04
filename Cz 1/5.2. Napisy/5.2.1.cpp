#include <iostream>
#include <string>
using namespace std;


int wyczysc (char *braknapisu)
{
    cout << braknapisu << endl;
    braknapisu[0]=0;
    cout << braknapisu << endl;
}



int main()
{
    char napis[] = "Hello";
    cout << napis << endl;
    wyczysc (napis);
}
