#include <iostream>
using namespace std;

float n;
int k=1;

float funkcjagenerujaca (float s)
{

    while (k==1)
    {
        s = 1-(s*s);
        cout << s << endl;
        cout << "Czy chcesz kolejna liczbe?" << endl;
        cout << "1 - tak" << endl;
        cout << "0 - nie" << endl;
        cin >> k;
    }
    return s;
}

int main()
{
    cout << "Podaj liczbe z przedzialu od 0-1" << endl;
    cin >> n;

    funkcjagenerujaca (n);


}
