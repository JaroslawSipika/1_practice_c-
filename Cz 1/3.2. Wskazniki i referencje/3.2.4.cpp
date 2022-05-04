#include <iostream>
using namespace std;

int a;
int b;



void funkcja (int *wsk1, int *wsk2)
{
    if (*wsk2 < *wsk1)
    {
        int c = *wsk1;
        *wsk1 = *wsk2;
        *wsk2 = c;
    }

    cout << *wsk1 << endl;
    cout << *wsk2 << endl;

}



int main ()
{
    cout << "Podaj dwie liczby a oraz b" << endl;
    cin >> a;
    cin >> b;

    funkcja (&a, &b);
}

