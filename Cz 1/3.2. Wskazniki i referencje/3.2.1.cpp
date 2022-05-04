#include <iostream>
using namespace std;

int a;
int b;

int funkcja (int *wsk1, int *wsk2)
{
    if (*wsk1 < *wsk2)
        return *wsk1;
    else
        return *wsk2;

}

int main()
{
    cout << "Podaj dwie liczby a oraz b" << endl;
    cin >> a;
    cin >> b;

    cout << "Mniejsza liczba to: " <<  funkcja (&a, &b) << endl;
}



