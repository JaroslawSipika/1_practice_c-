#include <iostream>
#include <vector>
using namespace std;

double funkcjawektorowa (int n, vector <double> &wsk1, vector <double> &wsk2)
{

    double skalar = 0;
    for (int i=0; i<n; i++)
    {
        skalar = skalar + ((wsk1[i]) * (wsk2[i]));
    }
return skalar;
}


int main()
{
    int a;
    cout << "Podaj wielkosc" << endl;
    cin >> a;

    vector < double > tab1;
    vector < double > tab2;


    for (int i=0; i<a; i++)
    {
        tab1.push_back(i);
        tab2.push_back(i);
    }

    cout << funkcjawektorowa (a, tab1, tab2) << endl;

}





