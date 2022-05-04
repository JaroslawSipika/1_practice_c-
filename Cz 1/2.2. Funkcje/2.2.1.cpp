#include <iostream>
#include <cmath>
using namespace std;


float n;

float wartoscBez (float n)
{
    if (n<0)
    {
        n=abs(n);
        return n;
    }
    else
    {
        return n;
    }
}

int main ()
{
    cout << "Podaj wartosc n" << endl;
    cin >> n;
    cout << "Wartosc bezwzgledna z n to: " << wartoscBez(n) << endl;
}
