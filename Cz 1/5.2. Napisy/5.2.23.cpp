#include <iostream>
#include <string>
using namespace std;


string sklej(string nap1, string nap2, string nap3)
{
    string napisek = nap1 + nap2 + nap3;
    return napisek;
}



int main()
{
    string nap1 = "KORO";
    string nap2 = "NA ";
    string nap3 = "KIELCE";

    cout << sklej(nap1,nap2,nap3) << endl;
}
