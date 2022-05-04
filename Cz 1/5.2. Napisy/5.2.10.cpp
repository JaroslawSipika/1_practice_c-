#include <iostream>
using namespace std;


int wytnij2 (char *wtab1, char *wtab2)
{
    char *wtab3 = new char[sizeof wtab2];

    for (int i=0; wtab1[i]!=0; i++)
    {
        int k = i;
        int l = 0;

        for (int j=0; wtab2[j]==wtab1[k] && wtab2[j]!=0; j++)
        {
            wtab3[l] = wtab2[j];
            k++;
            l++;
        }
    }


    char *wtab4 = new char [sizeof wtab2];

    for (int i=0; wtab2[i] != 0; i++)
    {
        if (wtab3[i] != wtab2[i])
        {
            cout << "Nie ma takiego powtorzenia" << endl;
            return 0;
        }
        else wtab4 = wtab2;
    }

    cout << wtab4 << endl;


}

int main()
{
    char tab1[] = "CRISTIANORONALDO";
    char tab2[] = "TIA";


    wytnij2 (tab1, tab2);

}
