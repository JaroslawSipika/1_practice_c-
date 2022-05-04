#include <iostream>
using namespace std;

double funkcja (double (*wsk)(int a), int b)
{
        return wsk(b);

}

double funkcjawskazywana (int c)
{
    return c;
}


int main()
{

int c;
int d;


cout << "Podaj argument int dla funkcjiwkazywanej:" << endl;
cin >> c;

cout << funkcjawskazywana(c) << endl;

cout << "Podaj wartosc typu int dla drugiego argumentu: " << endl;
cin >> d;


cout << funkcja (&funkcjawskazywana, d) << endl;

}
