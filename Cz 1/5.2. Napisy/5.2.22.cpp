#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

char *sklej (char*wnap1, char*wnap2, char*wnap3)
{

    cout << strlen(wnap1) << endl;
    cout << strlen(wnap2) << endl;
    cout << strlen(wnap3) << endl;

    char *wyn = new char[(strlen(wnap1)+strlen(wnap2)+strlen(wnap3)+1)*sizeof(char)];

    strcpy(wyn,wnap1);
    strcat(wyn,wnap2);
    strcat(wyn,wnap3);

    return wyn;
}



int main()
{
    char nap1[] = "KORO";
    char nap2[] = "NA ";
    char nap3[] = "KIELCE";

    cout << sklej(nap1, nap2, nap3) << endl;

}
