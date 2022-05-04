#include <iostream>
using namespace std;

class tablica{

private:
    int tabliczka[9] = {0,1,2,3,4,5,6,7,8};

public:
    int &at(int);

};

int &tablica::at(int indeks)
{

    if (indeks<=9 && indeks>=0)
    {
        return tabliczka[indeks];
    }
    else return tabliczka[0];
}


int main()
{
    tablica tabelka1;

    cout << "Podaj indeks tablicy" << endl;
    int a;
    cin >> a;

    cout << tabelka1.at(a) << endl;



}
