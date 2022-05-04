#include <iostream>
#include <vector>
using namespace std;

int *funkcja (int n, vector <double> &wsk1, vector <double> &wsk2)
{

    int nowatab[n];
    int *nowywsk;
    nowywsk = nowatab;

    for (int i=0; i<n; i++)
    {
       nowatab[i] = wsk1[i] + wsk2[i];
    }
    return nowywsk;

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

    int *b = funkcja (a, tab1, tab2);

    cout << b << endl;



}
