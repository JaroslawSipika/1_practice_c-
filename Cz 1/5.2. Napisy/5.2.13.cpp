#include <iostream>
using namespace std;

void wytnijtm (char *wtab1, char *wtab2)
{
    int l=0;
    for (int i=0; wtab1[i]!=0; i++)
    {

        if (wtab1[i]!=wtab2[i])
        {
            wtab1[l]=wtab1[i];
            l++;
        }

    }
    wtab1[l]=0;
    cout << wtab1 << endl;

}



int main()
{
    char tab1[] = "POZDRO";
    char tab2[] = "OKZDRX";


    wytnijtm(tab1, tab2);


}
