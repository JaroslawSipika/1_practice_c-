#include <iostream>
using namespace std;

int wytnijzw (char *wtab1, char *wtab2)
{
    char *wtab3 = new char [sizeof wtab1];


    int k=0;
    int l=0;
    int counter=0;


    for (int i=0; wtab1[i]!=0; i++)
    {
            for (int j=0; wtab2[j]!=0; j++)
            {
                if (wtab1[i] == wtab2[j] && wtab1[i]!=counter)
                {
                    wtab3[l] = wtab1[i];
                    l++;
                    counter = wtab1[i];
                }

            }


    }

    cout << wtab3 << endl;
}



int main()
{

    char tab1[] = "RONALDO";
    char tab2[] = "LRAO";

    wytnijzw (tab1, tab2);




}

