#include <iostream>
using namespace std;

int **trojkat (int n)
{

    int **wsk = new int*[n];

    for (int i=0; i<n; i++)
    {
        wsk[i] = new int[n+1];
    }


 return wsk;


}



int main()
{
    int a;
    cin >> a;
    cout << trojkat (a) << endl;
}


