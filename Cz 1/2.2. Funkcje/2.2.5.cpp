#include <iostream>
using namespace std;

float k=2;
float l=0.5;
float j=1;
float n;

float potega(float n)
{
    if (n>1)
    {
        for(int i=1; i<=n; i++)
        {
            j = j * k;
        }
    }

    else if (n==0)
    {
        j=1;
    }


    else
    {
        n = -n;
        for(int i=1; i<=n; i++)
        {
            j = j * l;
        }
    }

    return j;
}

int main()
{
    cout << "Podaj liczbe n nieujemna 2^n" << endl;
    cin >> n;
    cout << "Wynik 2^n wynosi:" << potega(n) << endl;
}


