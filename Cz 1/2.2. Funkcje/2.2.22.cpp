#include <iostream>
using namespace std;


int n;


int ciag (int n)
{
    if (n<=1)
        return 1;
    else
        return ciag(n-1)+(2*ciag(n-2))+3;
}


int main()
{
    cout << "podaj n" << endl;
    cin >> n;

    cout << ciag(n) << endl;
}
