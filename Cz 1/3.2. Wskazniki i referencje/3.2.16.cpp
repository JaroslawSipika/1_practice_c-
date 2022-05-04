#include <iostream>
using namespace std;

void funkcja (const int *wsk1, int *const wsk2)
{

    cout << *wsk1 << endl;
    cout << *wsk2 << endl;

    *wsk2 = *wsk1;

    cout << *wsk1 << endl;
    cout << *wsk2 << endl;


}


int main()
{
    const int a = 1;
    int b = 9;

    funkcja(&a, &b);
}
