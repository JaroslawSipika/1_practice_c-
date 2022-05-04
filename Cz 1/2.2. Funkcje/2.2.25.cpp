#include <iostream>
using namespace std;

int n;

int ciag (int n)
{
    if (n<=1)
        return 1;
    else if (n%2==0)
        return n+ciag(n-1);
    else
        return n*ciag(n-1);
}


int main()
{
    cout << "podaj n" << endl;
    cin >> n;

    cout << ciag(n) << endl;

}
