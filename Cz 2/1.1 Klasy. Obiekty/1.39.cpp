#include <iostream>
using namespace std;

class semafor{

private:
    int stan;
    int n;

public:
    semafor(int);
    semafor();
    void rezerwuj();
    void zwolnij();
    bool stanek();

};

semafor::semafor(int a)
{
    stan = 0;
    n = a;
    cout << stan<<endl;
}

semafor::semafor()
{
    stan = 0;
    cout << stan << endl;
}

void semafor::rezerwuj()
{
    if (stan<n)
    {
        stan++;
    }
    cout << stan << endl;
}

void semafor::zwolnij()
{
    if (stan>0)
    {
        stan--;
    }
    cout << stan << endl;
}

bool semafor::stanek()
{
    if (stan == n)
    {
        return true;
    }
    else return false;
}




int main()
{
    int b;
    cin >> b;
    semafor semafor1(b);
    semafor semafor2;
    semafor1.rezerwuj();
    semafor1.rezerwuj();
    semafor1.stanek();
    semafor1.zwolnij();






}
