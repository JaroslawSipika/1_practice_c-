#include <iostream>
using namespace std;


int iloczyn = 1;
int n;

int silnia (int n)
{
    for (int i=1; i<=n; i++)
    {
        iloczyn = iloczyn * i;
    }
    return iloczyn;
}





int main()
{
    cout << "Podaj wartsc liczby n" << endl;
    cin >> n;

    cout << silnia(n) << endl;


}
