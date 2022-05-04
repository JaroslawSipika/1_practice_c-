#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;

    cout << "Podaj dwie liczby dodatnie" << endl;
    cin >> n;
    cin >> m;

    for (int i=n; i<m; i+=n)
    {
        cout << i << endl;
    }


}
