#include <iostream>
using namespace std;



class n_int{
private:
    int liczba;
    bool okr;
    friend n_int operator+(n_int, n_int);
public:
    n_int();
    n_int(int);

};

n_int::n_int()
{
    liczba = 0;
    okr = false;
}

n_int::n_int(int a)
{
    liczba = a;
    okr = false;
}

n_int operator+(n_int a, n_int b)
{
    n_int c;

    c.liczba = a.liczba + b.liczba;

    return c;
}

int main()
{
    n_int d(4);
    n_int e(5);

    n_int f;

    f = d+e;


}
