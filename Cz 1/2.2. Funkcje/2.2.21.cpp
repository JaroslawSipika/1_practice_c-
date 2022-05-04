#include <iostream>
using namespace std;

int n;

int ciag (int n)
{
    if (n<=0)
        return 1;
    else
        return 2*ciag(n-1)+5;
}







int main()
{
    cout << "Podaj n" << endl;
    cin >> n;

    cout << ciag(n) << endl;
}
