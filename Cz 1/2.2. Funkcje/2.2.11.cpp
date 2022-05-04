#include <iostream>
using namespace std;

double sum;
double n;

double suma (double d)
{
    sum = sum+d;
}

double pierwiastek (double n)
{
    double s;
    for (double i=0; i<=n; i++)
    {
        for (double j=0; j*j<=i; j++)
        {
            s=j;
        }
    suma(s);
    }
return sum;
}

int main()
{
    cout << "Podaj liczbe calkowita n" << endl;
    cin >> n;
    cout << "Suma pierwiastkow zaokraglnych w dol wynosi:" << pierwiastek(n)  << endl;
}
