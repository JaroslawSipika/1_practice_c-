#include <iostream>
using namespace std;

double *funkcja (int n, double *wsk)
{

    double *wsk2 = new double[n];
    cout << wsk << endl;
    cout << wsk2 << endl;

    for(int i=0; i<n; i++)
    {
        wsk2[i] = wsk[i];
    }
    return wsk2;
}



int main()
{
    int a;
    cout << "Podaj rozmiar tablicy " << endl;
    cin >> a;

    double *b = funkcja(a, new double[a]);

    cout << b << endl;

}
