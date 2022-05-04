#include <iostream>
using namespace std;


int sito (int n)
{
    bool *sito = new bool[n];

    for (int i=0; i<=n; i++)
    {
        sito[i] = true;
    }

    for (int k=2; k<n; k++)
    {
        if (sito[k]==true)
        {
            for (int w = k+k; w<=n; w=w+k)
                sito [w] = false;
        }
    }

  /*  for (int i=2; i<=n; i++)
    {
        cout << "tab" << "["<< i << "]" << "=" << sito[i] << endl;
    } */

    for (int i=n; i>0; i--)
    {
        if (sito[i] == true)
        {
            return i;
        }
    }
}



int main()
{
    int a;
    cout << "Podaj liczbe n" << endl;
    cin >> a;
    // a = a+1;

   cout << sito(a) << endl;
}
