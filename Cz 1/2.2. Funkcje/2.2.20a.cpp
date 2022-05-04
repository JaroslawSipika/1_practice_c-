#include <iostream>
using namespace std;

int n;

unsigned int silnia (unsigned int n)
{
    if (n<=1)
        return 1;
    else
        return silnia(n-1)*n;
}

int main()
{
    cout << "Podaj n" << endl;
    cin >> n;
    cout << silnia(n) << endl;

}
