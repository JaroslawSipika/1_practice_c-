#include <iostream>
using namespace std;

int n;
int m;

int funkcja (int n, int m)
{
    if (m==0)
        return n;
    else if (n==0)
        return m;
    else
        return funkcja(n-1,m)+funkcja(n,m-1)+funkcja(n-1,m-1);

}




int main()
{
    cout << "podaj n oraz m" << endl;
    cin >> n;
    cin >> m;

    cout << funkcja(n,m) << endl;

}
