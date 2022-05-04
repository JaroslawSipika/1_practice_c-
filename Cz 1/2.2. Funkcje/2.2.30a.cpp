#include <iostream>
using namespace std;

int n;
int m;

int pot (int n, int m=2)
{
    int p=1;
    if (n==0)
        return 0;
    for (int i=1; i<=m; i++)
        p*=n;
    return p;
}



int main()
{
    cout << "Podaj n oraz m" << endl;
    cin >> n;
    cin >> m;
    cout << pot(n,m) << endl;
}
