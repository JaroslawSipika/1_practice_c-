#include <iostream>
using namespace std;

int main()
{
    int n,m,pom1,pom2,suma=0,i;

    cout << "Podaj liczne n:" << endl;
    cin >> n;

    for (i=2; i<n; i++)
    {
        pom1=n;
        pom2=i;
        while (pom1*pom2!=0)
            if (pom1<pom2)
            {
                pom2=pom2%pom1;
                cout << pom2 << endl;
            }
            else
            {
                pom1=pom1%pom2;
                cout << pom1 << endl;
            }

        if ((pom1 == 1) || (pom2 == 1))
        {
            suma +=i;
            cout << suma << endl;
        }

    }
    cout << "Wynik obliczen to: " << suma << endl;
    return 0;
}
