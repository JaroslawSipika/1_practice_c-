#include <iostream>
using namespace std;

int n;
int m;


int dzielnik (int n, int m)
{

        if(n%m==0)
            return m;
        else
            return dzielnik(m, n%m);

}

int main()
{
    cout << "Podaj lczby" << endl;
    cin >> n;
    cin >> m;
    cout << dzielnik(n,m) << endl;
}
