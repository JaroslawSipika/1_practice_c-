#include <iostream>
#include <string>
using namespace std;

string wczytaj(string &napis)
{
    cin >> napis;
    return napis;
}

int main()
{
    string powitanie;
    cout << wczytaj(powitanie) << endl;
}
