#include <iostream>
using namespace std;


int sklej (char *wtab1, char *wtab2, char *wtab3)
{
    int i;
    int j;

    for (i=0; wtab1[i]!=0; i++)
    {
            wtab3[i] = wtab1[i];
    }

    for (j=0; wtab2[j]!=0; j++)
    {
            wtab3[i] = wtab2[j];
            i++;
    }
    wtab3[i]=0;



cout << wtab1 << endl;
cout << wtab2 << endl;
cout << wtab3 << endl;

}



int main()
{
    char tab1[] = "Ala m";
    char tab2[] = "a kota";

    char tab3[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";

    sklej (tab1, tab2, tab3);


}
