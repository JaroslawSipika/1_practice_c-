#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void zamien (string &nap)
{
    for (int i=0; i<nap.size() ; i++)
    {
        nap[i] = toupper(nap[i]);
    }
cout << nap << endl;

}


int main()
{
    string napis = "korona";
    zamien (napis);
}
