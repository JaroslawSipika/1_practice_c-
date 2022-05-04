#include <iostream>
using namespace std;

int porownaj (char *wsk1, char *wsk2)
{
    int i=0;
    for (i=0; wsk1[i]!=0 || wsk2[i]!=0; i++)
    {
        if (wsk1[i]==0 && wsk2[i]!=0)
        {
            return 0;
        }
        else if (wsk2[i]==0 && wsk1[i]!=0)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    char tab1[] = "Rowne";
    char tab2[] = "Rowne";


    cout << porownaj (tab1, tab2) << endl;



}
