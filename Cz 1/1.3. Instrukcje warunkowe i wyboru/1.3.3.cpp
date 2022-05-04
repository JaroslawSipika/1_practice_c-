# include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj trzy liczby calkowite: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;


    if (a>=b & a>=c) cout << "najwieksza liczba to: " << a << endl;
    else if (b>=a & b>=c)  cout << "najwieksza liczba to: " << b << endl;
    else cout << "najwieksza liczba to: " << c << endl;
}
