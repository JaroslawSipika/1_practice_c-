#include <iostream>
using namespace std;

int n;

int ciag (int n)
{
    if (n<2)
        return 1;
    else
        return (n-1)+ciag(n-1);
}


int main()
{
    cout << "podaj n" << endl;
    cin >> n;

    cout << ciag(n) << endl;

}
