#include <iostream>
using namespace std;


int funkcja (const int *wsk1, int *wsk2 )
{
    *wsk2 = *wsk1;
    cout << *wsk1 << endl;
    cout << *wsk2 << endl;
}



int main()
{
    const int a = 5;
    int b;

    cin >> b;

    funkcja (&a, &b);
}
