#include <iostream>
using namespace std;

int wytnij(char *wtab,int n,int m)
{
    int j = 0;
    char wtab2[] = "                    ";
    for (int i=n-1; i<=m-1; i++)
    {
        wtab2[j]= wtab[i];
        j++;
    }
    cout << wtab2 << endl;
}

int main()
{
    int a = 4;
    int b = 5;
    char tab[] = "BUDOWNICTWO";

    wytnij (tab, a, b);

}
