#include <iostream>
#include <cctype>
using namespace std;

void zamien(char *nap)
{
    for(int i=0; nap[i]!=0;i++)
    {
        nap[i] = toupper(nap[i]);
    }

cout << nap << endl;
}



int main()
{
    char napis[] = "kOrOnA";
    zamien (napis);
}
