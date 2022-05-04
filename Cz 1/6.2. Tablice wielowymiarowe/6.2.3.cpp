#include <iostream>
using namespace std;

void funkcja (int n, int m, int **wsk)
{
    for (int i=0; i<n; i++)
    {
        delete [] wsk[i];
    }
    delete []wsk;
}


int main()
{
    int a,b;
    cin >> a;
    cin >> b;





    funkcja (a, b, new int *[a]);

}
