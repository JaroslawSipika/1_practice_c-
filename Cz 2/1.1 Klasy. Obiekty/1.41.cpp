#include <iostream>
using namespace std;

class macierz{

private:


public:
    int **tab;
    int n;
    macierz(int);
    ~macierz();
};

macierz::macierz(int a)
{
    n = a;
    tab = new int*[n];
    for (int i=0; i<n; i++)
    {
        tab[i] = new int[n];
    }
}

macierz::~macierz()
{
        for (int i=0; i<n; i++)
        {
                delete []tab[i];
        }
        delete []*tab;
}

int main()
{
    int b;
    cin >> b;
    macierz macierz1(b);

}
