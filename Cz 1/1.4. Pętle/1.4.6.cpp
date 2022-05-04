#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe dla n dla n>2" << endl;
    cin >> n;

    int iloczyn = 1;
    if (n%2==0)
    {
        for (int i=2; i<=n; i=i+2)
        {

            iloczyn = iloczyn * i;
        }
    }
    else
    {
        for (int i=2; i<n; i=i+2)
        {
            iloczyn = iloczyn * i;
        }
    }

cout << iloczyn << endl;


}
