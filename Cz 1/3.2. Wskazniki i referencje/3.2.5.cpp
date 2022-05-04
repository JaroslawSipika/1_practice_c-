#include <iostream>
using namespace std;


int funkcja (const int *wsk1, const int *wsk2)
{
    cout << *wsk1 << endl;
    cout << *wsk2 << endl;

    int c = *wsk1 + *wsk2;
    return c;

}


int main ()
{
    cout << "Podaj dwie liczby a oraz b" << endl;

    const int a = 5;
    const int b = 10;

    cout << funkcja (&a, &b) << endl;
}

