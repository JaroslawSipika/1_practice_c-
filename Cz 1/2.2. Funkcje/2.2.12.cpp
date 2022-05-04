#include <iostream>
using namespace std;

int n;
int m;
int i;
int sumka;



int pierwiastek (int o,int p)
{
    int k=0;
    for (i=0; k<=o; i++)
    {

            int ilo=1;

            for (int j=1; j<=p; j++)
            {
                ilo=ilo*i;
            }
            k = ilo;

    }
    i--;
    i--;
    return i;
}

int suma (int n, int m)
{

    for (n; n>0; n--)
    {
        pierwiastek(n,m);
        sumka = sumka + i;
    }
    return sumka;
}


int main()
{

    cout << "Podaj n oraz m" << endl;
    cin >> n;
    cin >> m;

    cout << "Pierwiastek:" << pierwiastek(n,m) << endl;
    cout << "Suma pierwiastkow wynosi:" << suma(n,m) << endl;
}
