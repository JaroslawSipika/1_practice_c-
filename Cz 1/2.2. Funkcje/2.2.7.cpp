#include <iostream>
using namespace std;

float k;
float j=1;
float n;
float m;

float potega(float n, float m)
{
    if (m>=1)
    {
        for(int i=1; i<=m; i++)
        {
            k = n;
            j = j * k;
        }
    }

    else if (m<0)
    {
        m = -m;
        for(float i=1; i<=m; i++)
        {
            k = 1/n;
            j = j * k;
        }
    }

    else
    {
        j=1;
    }

    return j;
}

int main()
{
    cout << "Podaj liczbe n oraz m nieujemna n^m" << endl;
    cin >> n;
    cin >> m;
    cout << "Wynik 2^n wynosi:" << potega(n,m) << endl;
}


