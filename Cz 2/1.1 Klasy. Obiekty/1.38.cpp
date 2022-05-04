#include <iostream>
#include <string>

using namespace std;

class semafor_bin
{

private:
    string stan;

public:
    semafor_bin();
    void rezerwuj ();
    void zwolnij ();
    bool stanek();

};

semafor_bin::semafor_bin()
{
    stan = "wolny";
}

void semafor_bin::rezerwuj()
{
    if (stan == "wolny")
    {
        stan = "zajety";
    }
}

void semafor_bin::zwolnij()
{
    if (stan == "zajety")
    {
        stan = "wolny";
    }
}

bool semafor_bin::stanek()
{
    if (stan == "wolny")
    {
        return true;
    }
    else return false;
}

int main()
{
    semafor_bin semaforek;

    semaforek.rezerwuj();
    semaforek.zwolnij();
    semaforek.rezerwuj();
    cout << semaforek.stanek() << endl;
}
