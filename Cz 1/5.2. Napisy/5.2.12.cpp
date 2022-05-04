#include <iostream>
using namespace std;

int wytnijzw (char *wtab1, char *wtab2)
{
    char *wtab3 = new char [sizeof wtab1];


    int k=0;

    int counter=0;


    for (int i=0; wtab2[i]!=0; i++)
    {
        int l = 0;

            for (int j=0; wtab1[j]!=0; j++)
            {
                if (wtab2[i] != wtab1[j])
                {
                    wtab3[l] = wtab1[j];
                    l++;
                }


            }
        wtab1 = wtab3;


    }
cout << wtab1 << endl;
}



int main()
{

    char tab1[] = "RONALDO";
    char tab2[] = "ARNA";

    wytnijzw (tab1, tab2);




}


