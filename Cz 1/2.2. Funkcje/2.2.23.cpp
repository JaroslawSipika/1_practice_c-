#include <iostream>
using namespace std;

int n;

int fibo (int n)
{
    if (n<=2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}


int main()
{
    cout << "Podaj n" << endl;
    cin >> n;


    cout << fibo(n) << endl;
}
