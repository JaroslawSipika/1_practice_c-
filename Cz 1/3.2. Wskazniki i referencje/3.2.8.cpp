#include <iostream>
using namespace std;

int funkcja (int &a, int *b)
{
    cout << a << endl;
    cout << *b << endl;

    int x = a;
    a = *b;
    *b = x;

    cout << a << endl;
    cout << *b << endl;
}




int main()
{

    int c;
    int d;

    cout << "Podaj wartosc c orad d" << endl;
    cin >> c;
    cin >> d;


    funkcja (c, &d);

    cout << c << endl;
    cout << d << endl;

}
