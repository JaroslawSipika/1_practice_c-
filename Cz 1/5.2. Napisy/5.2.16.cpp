#include <iostream>
#include <string>
using namespace std;

void wczytaj (char *wtab)
{
    cin >> wtab;
    cout << wtab << endl;
}


int main()
{
    wczytaj (new char[100]);
}
