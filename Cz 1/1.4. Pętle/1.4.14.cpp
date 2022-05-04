#include <iostream>
#include <cmath>
using namespace std;


int main ()
{
    int a = 1;
    int b = 1;
    float c;
    int n;
    cout << "Podaj liczbe n" << endl;
    cin >> n;

    for (int a=1; a<n; a++)
    {
        for (int b=a+1; b<n; b++)
        {
            c=sqrt((a*a)+(b*b));
            int d=c;
            if ((c<n) && (c-d==0) && (c!=a) && (c!=b))
            {
                cout << "Szukana trojka to: a2: " << a << " b2: " << b << " c: " << c << endl;
            }
        }

    }
}
