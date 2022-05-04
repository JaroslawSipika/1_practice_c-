#include <iostream>
using namespace std;

int **funkcja (int n, int m)
{
    int **wsk = new int*[n];

    for (int i=0; i<n; i++)
    {
        wsk[i]=new int[m];
    }
    return wsk;

}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << funkcja (a,b) << endl;
}
