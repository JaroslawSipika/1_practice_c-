#include <iostream>
#include <string>
using namespace std;

class poczta
{
    public:
        string nadawca;
        string odbiorca;
        string temat;
        string tresc;

};



int main()
{
    poczta poczta1;

    poczta1.nadawca  = "Jaroslaw Sipika";
    poczta1.odbiorca = "Ksenia Pabian";
    poczta1.temat = "Budownictwo";
    poczta1.tresc = "Jak tam na budowie?";

}
