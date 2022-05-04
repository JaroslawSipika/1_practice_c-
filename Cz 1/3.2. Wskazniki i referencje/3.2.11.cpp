#include <iostream>
using namespace std;

int *funkcja (int n)
{
    return new int [n];
}



int main()
{
    int k;

    cout << "Podaj liczbe n" << endl;
    cin >> k;

    cout << *funkcja (k) << endl;

}
