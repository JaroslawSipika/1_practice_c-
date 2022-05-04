#include <iostream>
using namespace std;

class wskaznik{
private:
    int *wsk;

public:
    int utworz(int);
    int *zwroc();
    void zwolnij();
    void kopiuj(wskaznik &);
};

int wskaznik::utworz(int n)
{
    wsk = new int[n];
}

int *wskaznik::zwroc()
{
    return wsk;
}

void wskaznik::zwolnij()
{
    delete []wsk;
    wsk = NULL;
}

void wskaznik::kopiuj(wskaznik &ref)
{
    ref.wsk = wsk;
}

int main()
{
    wskaznik wskaznik1;


    int a;
    cout << "Ile elementowa tablice utworzyc?" << endl;
    cin >> a;
    wskaznik1.utworz(a);
    wskaznik1.zwroc();
    wskaznik1.zwolnij();

    wskaznik1.kopiuj(wskaznik1);


}
