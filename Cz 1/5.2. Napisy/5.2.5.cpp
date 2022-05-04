#include <iostream>
using namespace std;


void przepisz (char *wtab1, char *wtab2)
{
    cout << wtab1 << endl;
    cout << wtab2 << endl;

    for (int i=0; wtab2[i]!=0; i++)
    {
            wtab2[i] = wtab1[i];
    }
    cout << wtab1 << endl;
    cout << wtab2 << endl;
}



int main()
{
    char tab1[] = "MADRYT";
    char tab2[] = "BARCELONA";

    przepisz (tab1, tab2);

}
