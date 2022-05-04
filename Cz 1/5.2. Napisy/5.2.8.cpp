#include <iostream>
using namespace std;

void maleduze (char *wtab)
{
    for(int i=0; wtab[i]!=0; i++)
    {
        if ((wtab[i] >= 'a') && (wtab[i] <= 'z'))
        {
            wtab[i]-=('a' - 'A');
        }
    }

cout << wtab << endl;

}



int main()
{
    char tab[] = "ala ma kota";

    maleduze(tab);
}
