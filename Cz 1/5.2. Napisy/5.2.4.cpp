#include <iostream>
using namespace std;


int funkcja (char *wsk1, char *wsk2)
{

    for (int i=0; wsk1[i]!=0 || wsk2[i]!=0; i++)
    {

        if(wsk1[i]==0 && wsk2[i]!=0)
        {
            cout << "Napis pierwszy jest krotszy" << endl;
            return 1;
        }

        if(wsk2[i]==0 && wsk1[i]!=0)
        {
            cout << "Napis drugi jest krotszy" << endl;
            return 0;
        }

        if (wsk1[i] < wsk2[i])
        {
            return 1;
        }

        if (wsk1[i] > wsk2[i])
        {
            return 0;
        }
    }
cout << "Napisy sa rowne" << endl;
return 0;
}

int main()
{
    char tab1[] = "Ala";
    char tab2[] = "Ala";

    cout << funkcja (tab1, tab2) << endl;

}
