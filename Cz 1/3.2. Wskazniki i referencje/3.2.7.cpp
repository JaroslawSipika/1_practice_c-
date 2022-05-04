#include <iostream>
using namespace std;

void funkcja (int &ref1, int &ref2)
{

    int c = ref1;
    ref1 = ref2;
    ref2 = c;

    cout << ref1 << endl;
    cout << ref2 << endl;


}

int main()
{
    cout << "Podaj dwie liczby a oraz b" << endl;
    int a;
    int b;
    cin >> a;
    cin >> b;

    cout << a << endl;
    cout << b << endl;

    funkcja (a, b);

    cout << a << endl;
    cout << b << endl;

}




