#include <iostream>
using namespace std;


void kopiujn (char *wtab1,char *wtab2, int n)
{
    cout << wtab1 << endl;
    cout << wtab2 << endl;
    cout << n << endl;

    for (int i=0; wtab2[i]!=0; i++)
    {
        if (i<n)
        {
            wtab2[i] = wtab1[i];
        }
        else
            wtab2[i] = 0;
    }

    cout << wtab1 << endl;
    cout << wtab2 << endl;



}



int main()
{

    cout << "Ile znakow przekopiowac" << endl;
    int a;
    cin >> a;

    char tab1[] = "LACASADEPAPEL";
    char tab2[] = "BELLACIAOBELLACIAOBELLACIAOCIAO";

    kopiujn(tab1, tab2, a);

}
