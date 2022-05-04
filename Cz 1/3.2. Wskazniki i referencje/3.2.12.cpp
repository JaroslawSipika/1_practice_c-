#include <iostream>
using namespace std;

double *funkcja (double n)
{

    return new double [n];
}



int main()
{
    double k;

    cout << "Podaj liczbe k" << endl;
    cin >> k;

    cout << *funkcja (k) << endl;

}
