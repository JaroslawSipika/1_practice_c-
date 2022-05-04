#include <iostream>
#include <string>
using namespace std;


string zwroc (string *tablica,int n)
{

    cout << tablica[0] << endl;
    cout << tablica[1] << endl;
    cout << tablica[2] << endl;


    int i, min=0;
    for (i=1; i<n; i++)
    {
        if (tablica[min]>tablica[i])
        {
            min = i;
        }
    }
    return tablica[min];

}





int main()
{


    int a = 3;
    cout << a << endl;


    string tablica[a] = {"ARAB", "ARFA", "ARAA"};


    cout << zwroc (tablica, a) << endl;

}

