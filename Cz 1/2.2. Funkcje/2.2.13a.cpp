#include <iostream>
using namespace std;

int n;

int kwadrat (int n)
{
    for (int a=0; a*a<=n; a++)
    {
        for(int b=0; ((b*b)<=(n-(a*a))); b++)
        {
            if((a*a+b*b)==n)
            {
                cout << a << endl;
                cout << b << endl;
            }
        }
    }
}


int main()
{
    cout << "Podaj liczbe" << endl;
    cin >> n;
    kwadrat(n);
}
