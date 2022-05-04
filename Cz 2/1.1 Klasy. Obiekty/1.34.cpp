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
    void przepisz(int *, wskaznik &);
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

void wskaznik::przepisz(int *t, wskaznik &ref)
{
    ref.wsk = t;
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
    wskaznik1.przepisz(new int[a], wskaznik1);


}

